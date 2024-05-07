class Box {
private:
    int length;
    int breadth;
    int height;

public:
    Box() : length(0), breadth(0), height(0) {}


    Box(int l, int b, int h) : length(l), breadth(b), height(h) {}

    Box(const Box& other) : length(other.length), breadth(other.breadth), height(other.height) {}


    int getLength() const { return length; }
    int getBreadth() const { return breadth; }
    int getHeight() const { return height; }

    long long CalculateVolume() const { return (long long)length * breadth * height; }

    bool operator<(const Box& other) const {
        if (length < other.length)
            return true;
        else if (length == other.length && breadth < other.breadth)
            return true;
        else if (length == other.length && breadth == other.breadth && height < other.height)
            return true;
        else
            return false;
    }


    friend ostream& operator<<(ostream& out, const Box& box) {
        out << box.length << " " << box.breadth << " " << box.height;
        return out;
    }
};
