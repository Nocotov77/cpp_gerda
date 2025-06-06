class ChessPlayer {
public:
    std::string name;
    std::string surname;
    int rating;

    ChessPlayer(std::string p_name, std::string p_surname, int p_rating)
        : name(p_name), surname(p_surname), rating(p_rating) {}

    void statistics() {
        std::cout << "Full name: " << name << " " << surname << " Rating: " << rating << std::endl;
    }

    friend bool operator==(const ChessPlayer& lhs, const ChessPlayer& rhs) {
        return lhs.rating == rhs.rating;
    }

    friend bool operator==(const ChessPlayer& lhs, int rhs) {
        return lhs.rating == rhs;
    }

    friend bool operator==(int lhs, const ChessPlayer& rhs) {
        return lhs == rhs.rating;
    }

    friend bool operator!=(const ChessPlayer& lhs, const ChessPlayer& rhs) {
        return !(lhs == rhs);
    }

    friend bool operator!=(const ChessPlayer& lhs, int rhs) {
        return !(lhs == rhs);
    }

    friend bool operator!=(int lhs, const ChessPlayer& rhs) {
        return !(lhs == rhs);
    }

    friend bool operator<(const ChessPlayer& lhs, const ChessPlayer& rhs) {
        return lhs.rating < rhs.rating;
    }

    friend bool operator<(const ChessPlayer& lhs, int rhs) {
        return lhs.rating < rhs;
    }

    friend bool operator<(int lhs, const ChessPlayer& rhs) {
        return lhs < rhs.rating;
    }

    friend bool operator>(const ChessPlayer& lhs, const ChessPlayer& rhs) {
        return lhs.rating > rhs.rating;
    }

    friend bool operator>(const ChessPlayer& lhs, int rhs) {
        return lhs.rating > rhs;
    }

    friend bool operator>(int lhs, const ChessPlayer& rhs) {
        return lhs > rhs.rating;
    }
};