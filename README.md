Καλείστε να δημιουργήσετε ένα πρόγραμμα για την εύρεση του φοιτητή με το μεγαλύτερο
μέσο όρο στα μαθήματα του εξαμήνου.
I. Αρχικά ο χρήστης θα δίνει από το πληκτρολόγιο τα επίθετα 4 φοιτητών και θα τα
αποθηκεύει σε δισδιάστατο πίνακα χαρακτήρων names[4][20]. Για χάριν απλότητας
θεωρούμε ότι τα επίθετα των φοιτητών δεν μπορούν να ξεπεράσουν τους 20
χαρακτήρες (19 συν ο ειδικός χαρακτήρας ‘\0’).
II. Για κάθε έναν φοιτητή ο χρήστης θα δίνει τις βαθμολογίες τους στα 4 μαθήματα του
εξαμήνου ως ακέραιες τιμές στο πεδίο [0, 10] οι οποίες θα αποθηκεύονται σε έναν
δισδιάστατο πίνακα grades[4][4]. Αν ο χρήστης πληκτρολογήσει βαθμολογία εκτός
του πεδίου το πρόγραμμα θα του ζητάει να δώσει μία σωστή τιμή με κατάλληλο
μήνυμα.
III. Για κάθε φοιτητή θα υπολογίζεται ο μέσος όρος των μαθημάτων του στο εξάμηνο ως
πραγματική τιμή και θα αποθηκεύεται σε παράλληλο πίνακα mean[4], τεσσάρων
θέσεων.
IV. Τέλος καλείστε να βρείτε τον φοιτητή με τον υψηλότερο μέσο όρο και να εκτυπώσετε
