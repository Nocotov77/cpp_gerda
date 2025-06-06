class File {
private:
    std::fstream file;
    std::string mode;
    std::string pathToFileName;

    std::ios_base::openmode parseMode(const std::string& m) {
        if (m == "r")      return std::ios::in;
        if (m == "w")      return std::ios::out | std::ios::trunc;
        if (m == "rw")     return std::ios::in | std::ios::out;
        if (m == "a")      return std::ios::app | std::ios::out;
        return std::ios::in;
    }

public:
    File(const std::string& path, const std::string& m = "r")
        : pathToFileName(path), mode(m) {
        std::ios_base::openmode om = parseMode(m);
        file.open(path, om);
    }

    std::string getPath() const { return pathToFileName; }
    std::string getMode() const { return mode; }
    bool isOpen() const { return file.is_open(); }

    void close() {
        if (file.is_open()) file.close();
    }

    std::vector<std::string> readLines() {
        std::vector<std::string> lines;
        if (!file.is_open() || !file.good()) return lines;

        file.seekg(0, std::ios::end);
        std::streamsize size = file.tellg();
        file.seekg(0, std::ios::beg);

        if (size <= 0) return lines;

        std::string buffer(static_cast<size_t>(size), '\0');
        file.read(&buffer[0], size);

        size_t start = 0;
        while (start < buffer.size()) {
            size_t end = buffer.find('\n', start);
            if (end == std::string::npos) end = buffer.size();
            std::string line = buffer.substr(start, end - start);
            if (!line.empty() && line.back() == '\r') line.pop_back();
            lines.push_back(line);
            start = end + 1;
        }
        return lines;
    }

    void writeLines(const std::vector<std::string>& lines, bool addNewline = false) {
        if (!file.is_open()) return;

        std::string buffer;
        for (const auto& line : lines) {
            buffer += line;
            if (addNewline) buffer += '\n';
        }
        file << buffer;
    }
};