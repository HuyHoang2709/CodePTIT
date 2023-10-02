package VaoRaFile.J07007_LietKeTuKhacNhau;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class WordSet {
    private ArrayList<String> tapTu = new ArrayList<>();

    public WordSet(String tenFile) throws FileNotFoundException {
        Scanner sc = new Scanner(new File(tenFile));
        while (sc.hasNext()) {
            String tmp = sc.next().toLowerCase().trim();
            if (!this.tapTu.contains(tmp)) {
                this.tapTu.add(tmp);
            }
        }
        Collections.sort(this.tapTu);
    }

    public String toString() {
        StringBuilder res = new StringBuilder();
        for (String str : this.tapTu) {
            res.append(str).append("\n");
        }
        return res.toString();
    }
}
