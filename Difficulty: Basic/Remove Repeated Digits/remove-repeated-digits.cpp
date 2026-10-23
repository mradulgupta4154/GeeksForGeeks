long long int modify(long long int n) {
    string c = to_string(n);
    string a = "";

    for (int i = 0; i < c.length(); i++) {
        // If it's not the last character and the current digit equals the next one, skip it
        if (i < c.length() - 1 && c[i] == c[i + 1]) {
            continue;
        }
        a += c[i];
    }

    return stoll(a);
}