#ifndef INSERTINDEXMACROSOPERATORINBASEMODEL_H
#define INSERTINDEXMACROSOPERATORINBASEMODEL_H

#define insertIndexMacrosOperator1(v1) \
  if (index == 0) {                    \
    return QVariant(v1);               \
  }

#define insertIndexMacrosOperator2(v1, v2) \
  if (index == 1) {                        \
    return QVariant(v2);                   \
  }                                        \
  insertIndexMacrosOperator1(v1);

#define insertIndexMacrosOperator3(v1, v2, v3) \
  if (index == 2) {                            \
    return QVariant(v3);                       \
  }                                            \
  insertIndexMacrosOperator2(v1, v2);

#define insertIndexMacrosOperator4(v1, v2, v3, v4) \
  if (index == 3) {                                \
    return QVariant(v4);                           \
  }                                                \
  insertIndexMacrosOperator3(v1, v2, v3);

#define insertIndexMacrosOperator5(v1, v2, v3, v4, v5) \
  if (index == 4) {                                    \
    return QVariant(v5);                               \
  }                                                    \
  insertIndexMacrosOperator4(v1, v2, v3, v4);

#define insertIndexMacrosOperator6(v1, v2, v3, v4, v5, v6) \
  if (index == 5) {                                        \
    return QVariant(v6);                                   \
  }                                                        \
  insertIndexMacrosOperator5(v1, v2, v3, v4, v5);

#define insertIndexMacrosOperator7(v1, v2, v3, v4, v5, v6, v7) \
  if (index == 6) {                                            \
    return QVariant(v7);                                       \
  }                                                            \
  insertIndexMacrosOperator6(v1, v2, v3, v4, v5, v6);

#define insertIndexMacrosOperator8(v1, v2, v3, v4, v5, v6, v7, v8) \
  if (index == 7) {                                                \
    return QVariant(v8);                                           \
  }                                                                \
  insertIndexMacrosOperator7(v1, v2, v3, v4, v5, v6, v7);

#define insertIndexMacrosOperator9(v1, v2, v3, v4, v5, v6, v7, v8, v9) \
  if (index == 8) {                                                    \
    return QVariant(v9);                                               \
  }                                                                    \
  insertIndexMacrosOperator8(v1, v2, v3, v4, v5, v6, v7, v8);

#define insertIndexMacrosOperator10(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) \
  if (index == 9) {                                                          \
    return QVariant(v10);                                                    \
  }                                                                          \
  insertIndexMacrosOperator9(v1, v2, v3, v4, v5, v6, v7, v8, v9);

#define insertIndexMacrosOperator11(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11)                                     \
  if (index == 10) {                                                         \
    return QVariant(v11);                                                    \
  }                                                                          \
  insertIndexMacrosOperator10(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10);

#define insertIndexMacrosOperator12(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12)                                \
  if (index == 11) {                                                         \
    return QVariant(v12);                                                    \
  }                                                                          \
  insertIndexMacrosOperator11(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11);

#define insertIndexMacrosOperator13(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13)                           \
  if (index == 12) {                                                         \
    return QVariant(v13);                                                    \
  }                                                                          \
  insertIndexMacrosOperator12(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12);

#define insertIndexMacrosOperator14(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14)                      \
  if (index == 13) {                                                         \
    return QVariant(v14);                                                    \
  }                                                                          \
  insertIndexMacrosOperator13(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13);

#define insertIndexMacrosOperator15(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15)                 \
  if (index == 14) {                                                         \
    return QVariant(v15);                                                    \
  }                                                                          \
  insertIndexMacrosOperator14(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14);

#define insertIndexMacrosOperator16(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16)            \
  if (index == 15) {                                                         \
    return QVariant(v16);                                                    \
  }                                                                          \
  insertIndexMacrosOperator15(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15);

#define insertIndexMacrosOperator17(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17)       \
  if (index == 16) {                                                         \
    return QVariant(v17);                                                    \
  }                                                                          \
  insertIndexMacrosOperator16(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16);

#define insertIndexMacrosOperator18(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18)  \
  if (index == 17) {                                                         \
    return QVariant(v18);                                                    \
  }                                                                          \
  insertIndexMacrosOperator17(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17);

#define insertIndexMacrosOperator19(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19)                                     \
  if (index == 18) {                                                         \
    return QVariant(v19);                                                    \
  }                                                                          \
  insertIndexMacrosOperator18(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18);

#define insertIndexMacrosOperator20(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20)                                \
  if (index == 19) {                                                         \
    return QVariant(v20);                                                    \
  }                                                                          \
  insertIndexMacrosOperator19(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19);

#define insertIndexMacrosOperator21(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21)                           \
  if (index == 20) {                                                         \
    return QVariant(v21);                                                    \
  }                                                                          \
  insertIndexMacrosOperator20(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20);

#define insertIndexMacrosOperator22(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22)                      \
  if (index == 21) {                                                         \
    return QVariant(v22);                                                    \
  }                                                                          \
  insertIndexMacrosOperator21(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21);

#define insertIndexMacrosOperator23(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23)                 \
  if (index == 22) {                                                         \
    return QVariant(v23);                                                    \
  }                                                                          \
  insertIndexMacrosOperator22(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22);

#define insertIndexMacrosOperator24(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24)            \
  if (index == 23) {                                                         \
    return QVariant(v24);                                                    \
  }                                                                          \
  insertIndexMacrosOperator23(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23);

#define insertIndexMacrosOperator25(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25)       \
  if (index == 24) {                                                         \
    return QVariant(v25);                                                    \
  }                                                                          \
  insertIndexMacrosOperator24(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24);

#define insertIndexMacrosOperator26(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26)  \
  if (index == 25) {                                                         \
    return QVariant(v26);                                                    \
  }                                                                          \
  insertIndexMacrosOperator25(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25);

#define insertIndexMacrosOperator27(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27)                                     \
  if (index == 26) {                                                         \
    return QVariant(v27);                                                    \
  }                                                                          \
  insertIndexMacrosOperator26(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25, v26);

#define insertIndexMacrosOperator28(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28)                                \
  if (index == 27) {                                                         \
    return QVariant(v28);                                                    \
  }                                                                          \
  insertIndexMacrosOperator27(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25, v26, v27);

#define insertIndexMacrosOperator29(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29)                           \
  if (index == 28) {                                                         \
    return QVariant(v29);                                                    \
  }                                                                          \
  insertIndexMacrosOperator28(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25, v26, v27, v28);

#define insertIndexMacrosOperator30(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30)                      \
  if (index == 29) {                                                         \
    return QVariant(v30);                                                    \
  }                                                                          \
  insertIndexMacrosOperator29(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25, v26, v27, v28, v29);

#define insertIndexMacrosOperator31(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31)                 \
  if (index == 30) {                                                         \
    return QVariant(v31);                                                    \
  }                                                                          \
  insertIndexMacrosOperator30(                                               \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30);

#define insertIndexMacrosOperator32(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32)            \
  if (index == 31) {                                                         \
    return QVariant(v32);                                                    \
  }                                                                          \
  insertIndexMacrosOperator31(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25, v26, v27, v28, v29,   \
                              v30, v31);

#define insertIndexMacrosOperator33(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32, v33)       \
  if (index == 32) {                                                         \
    return QVariant(v33);                                                    \
  }                                                                          \
  insertIndexMacrosOperator32(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25, v26, v27, v28, v29,   \
                              v30, v31, v32);

#define insertIndexMacrosOperator34(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32, v33, v34)  \
  if (index == 33) {                                                         \
    return QVariant(v34);                                                    \
  }                                                                          \
  insertIndexMacrosOperator33(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25, v26, v27, v28, v29,   \
                              v30, v31, v32, v33);

#define insertIndexMacrosOperator35(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32, v33, v34,  \
                                    v35)                                     \
  if (index == 34) {                                                         \
    return QVariant(v35);                                                    \
  }                                                                          \
  insertIndexMacrosOperator34(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25, v26, v27, v28, v29,   \
                              v30, v31, v32, v33, v34);

#define insertIndexMacrosOperator36(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32, v33, v34,  \
                                    v35, v36)                                \
  if (index == 35) {                                                         \
    return QVariant(v36);                                                    \
  }                                                                          \
  insertIndexMacrosOperator35(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25, v26, v27, v28, v29,   \
                              v30, v31, v32, v33, v34, v35);

#define insertIndexMacrosOperator37(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32, v33, v34,  \
                                    v35, v36, v37)                           \
  if (index == 36) {                                                         \
    return QVariant(v37);                                                    \
  }                                                                          \
  insertIndexMacrosOperator36(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25, v26, v27, v28, v29,   \
                              v30, v31, v32, v33, v34, v35, v36);

#define insertIndexMacrosOperator38(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32, v33, v34,  \
                                    v35, v36, v37, v38)                      \
  if (index == 37) {                                                         \
    return QVariant(v38);                                                    \
  }                                                                          \
  insertIndexMacrosOperator37(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25, v26, v27, v28, v29,   \
                              v30, v31, v32, v33, v34, v35, v36, v37);

#define insertIndexMacrosOperator39(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32, v33, v34,  \
                                    v35, v36, v37, v38, v39)                 \
  if (index == 38) {                                                         \
    return QVariant(v39);                                                    \
  }                                                                          \
  insertIndexMacrosOperator38(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25, v26, v27, v28, v29,   \
                              v30, v31, v32, v33, v34, v35, v36, v37, v38);

#define insertIndexMacrosOperator40(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32, v33, v34,  \
                                    v35, v36, v37, v38, v39, v40)            \
  if (index == 39) {                                                         \
    return QVariant(v40);                                                    \
  }                                                                          \
  insertIndexMacrosOperator39(                                               \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,  \
      v31, v32, v33, v34, v35, v36, v37, v38, v39);

#define insertIndexMacrosOperator41(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32, v33, v34,  \
                                    v35, v36, v37, v38, v39, v40, v41)       \
  if (index == 40) {                                                         \
    return QVariant(v41);                                                    \
  }                                                                          \
  insertIndexMacrosOperator40(                                               \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,  \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40);

#define insertIndexMacrosOperator42(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32, v33, v34,  \
                                    v35, v36, v37, v38, v39, v40, v41, v42)  \
  if (index == 41) {                                                         \
    return QVariant(v42);                                                    \
  }                                                                          \
  insertIndexMacrosOperator41(                                               \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,  \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41);

#define insertIndexMacrosOperator43(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43)                \
  if (index == 42) {                                                           \
    return QVariant(v43);                                                      \
  }                                                                            \
  insertIndexMacrosOperator42(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42);

#define insertIndexMacrosOperator44(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44)           \
  if (index == 43) {                                                           \
    return QVariant(v44);                                                      \
  }                                                                            \
  insertIndexMacrosOperator43(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43);

#define insertIndexMacrosOperator45(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45)      \
  if (index == 44) {                                                           \
    return QVariant(v45);                                                      \
  }                                                                            \
  insertIndexMacrosOperator44(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44);

#define insertIndexMacrosOperator46(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46) \
  if (index == 45) {                                                           \
    return QVariant(v46);                                                      \
  }                                                                            \
  insertIndexMacrosOperator45(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,    \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,     \
                              v21, v22, v23, v24, v25, v26, v27, v28, v29,     \
                              v30, v31, v32, v33, v34, v35, v36, v37, v38,     \
                              v39, v40, v41, v42, v43, v44, v45);

#define insertIndexMacrosOperator47(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32, v33, v34,  \
                                    v35, v36, v37, v38, v39, v40, v41, v42,  \
                                    v43, v44, v45, v46, v47)                 \
  if (index == 46) {                                                         \
    return QVariant(v47);                                                    \
  }                                                                          \
  insertIndexMacrosOperator46(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25, v26, v27, v28, v29,   \
                              v30, v31, v32, v33, v34, v35, v36, v37, v38,   \
                              v39, v40, v41, v42, v43, v44, v45, v46);

#define insertIndexMacrosOperator48(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32, v33, v34,  \
                                    v35, v36, v37, v38, v39, v40, v41, v42,  \
                                    v43, v44, v45, v46, v47, v48)            \
  if (index == 47) {                                                         \
    return QVariant(v48);                                                    \
  }                                                                          \
  insertIndexMacrosOperator47(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,  \
                              v12, v13, v14, v15, v16, v17, v18, v19, v20,   \
                              v21, v22, v23, v24, v25, v26, v27, v28, v29,   \
                              v30, v31, v32, v33, v34, v35, v36, v37, v38,   \
                              v39, v40, v41, v42, v43, v44, v45, v46, v47);

#define insertIndexMacrosOperator49(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32, v33, v34,  \
                                    v35, v36, v37, v38, v39, v40, v41, v42,  \
                                    v43, v44, v45, v46, v47, v48, v49)       \
  if (index == 48) {                                                         \
    return QVariant(v49);                                                    \
  }                                                                          \
  insertIndexMacrosOperator48(                                               \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,  \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,  \
      v45, v46, v47, v48);

#define insertIndexMacrosOperator50(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, \
                                    v11, v12, v13, v14, v15, v16, v17, v18,  \
                                    v19, v20, v21, v22, v23, v24, v25, v26,  \
                                    v27, v28, v29, v30, v31, v32, v33, v34,  \
                                    v35, v36, v37, v38, v39, v40, v41, v42,  \
                                    v43, v44, v45, v46, v47, v48, v49, v50)  \
  if (index == 49) {                                                         \
    return QVariant(v50);                                                    \
  }                                                                          \
  insertIndexMacrosOperator49(                                               \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,  \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,  \
      v45, v46, v47, v48, v49);

#define insertIndexMacrosOperator51(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51)                                                   \
  if (index == 50) {                                                           \
    return QVariant(v51);                                                      \
  }                                                                            \
  insertIndexMacrosOperator50(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50);

#define insertIndexMacrosOperator52(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52)                                              \
  if (index == 51) {                                                           \
    return QVariant(v52);                                                      \
  }                                                                            \
  insertIndexMacrosOperator51(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51);

#define insertIndexMacrosOperator53(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53)                                         \
  if (index == 52) {                                                           \
    return QVariant(v53);                                                      \
  }                                                                            \
  insertIndexMacrosOperator52(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52);

#define insertIndexMacrosOperator54(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54)                                    \
  if (index == 53) {                                                           \
    return QVariant(v54);                                                      \
  }                                                                            \
  insertIndexMacrosOperator53(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53);

#define insertIndexMacrosOperator55(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55)                               \
  if (index == 54) {                                                           \
    return QVariant(v55);                                                      \
  }                                                                            \
  insertIndexMacrosOperator54(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54);

#define insertIndexMacrosOperator56(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56)                          \
  if (index == 55) {                                                           \
    return QVariant(v56);                                                      \
  }                                                                            \
  insertIndexMacrosOperator55(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55);

#define insertIndexMacrosOperator57(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57)                     \
  if (index == 56) {                                                           \
    return QVariant(v57);                                                      \
  }                                                                            \
  insertIndexMacrosOperator56(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56);

#define insertIndexMacrosOperator58(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58)                \
  if (index == 57) {                                                           \
    return QVariant(v58);                                                      \
  }                                                                            \
  insertIndexMacrosOperator57(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57);

#define insertIndexMacrosOperator59(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59)           \
  if (index == 58) {                                                           \
    return QVariant(v59);                                                      \
  }                                                                            \
  insertIndexMacrosOperator58(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58);

#define insertIndexMacrosOperator60(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60)      \
  if (index == 59) {                                                           \
    return QVariant(v60);                                                      \
  }                                                                            \
  insertIndexMacrosOperator59(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59);

#define insertIndexMacrosOperator61(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61) \
  if (index == 60) {                                                           \
    return QVariant(v61);                                                      \
  }                                                                            \
  insertIndexMacrosOperator60(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60);

#define insertIndexMacrosOperator62(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62)                                                                       \
  if (index == 61) {                                                           \
    return QVariant(v62);                                                      \
  }                                                                            \
  insertIndexMacrosOperator61(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61);

#define insertIndexMacrosOperator63(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63)                                                                  \
  if (index == 62) {                                                           \
    return QVariant(v63);                                                      \
  }                                                                            \
  insertIndexMacrosOperator62(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62);

#define insertIndexMacrosOperator64(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64)                                                             \
  if (index == 63) {                                                           \
    return QVariant(v64);                                                      \
  }                                                                            \
  insertIndexMacrosOperator63(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63);

#define insertIndexMacrosOperator65(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65)                                                        \
  if (index == 64) {                                                           \
    return QVariant(v65);                                                      \
  }                                                                            \
  insertIndexMacrosOperator64(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64);

#define insertIndexMacrosOperator66(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66)                                                   \
  if (index == 65) {                                                           \
    return QVariant(v66);                                                      \
  }                                                                            \
  insertIndexMacrosOperator65(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65);

#define insertIndexMacrosOperator67(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67)                                              \
  if (index == 66) {                                                           \
    return QVariant(v67);                                                      \
  }                                                                            \
  insertIndexMacrosOperator66(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66);

#define insertIndexMacrosOperator68(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68)                                         \
  if (index == 67) {                                                           \
    return QVariant(v68);                                                      \
  }                                                                            \
  insertIndexMacrosOperator67(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67);

#define insertIndexMacrosOperator69(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69)                                    \
  if (index == 68) {                                                           \
    return QVariant(v69);                                                      \
  }                                                                            \
  insertIndexMacrosOperator68(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68);

#define insertIndexMacrosOperator70(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70)                               \
  if (index == 69) {                                                           \
    return QVariant(v70);                                                      \
  }                                                                            \
  insertIndexMacrosOperator69(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69);

#define insertIndexMacrosOperator71(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71)                          \
  if (index == 70) {                                                           \
    return QVariant(v71);                                                      \
  }                                                                            \
  insertIndexMacrosOperator70(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70);

#define insertIndexMacrosOperator72(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72)                     \
  if (index == 71) {                                                           \
    return QVariant(v72);                                                      \
  }                                                                            \
  insertIndexMacrosOperator71(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71);

#define insertIndexMacrosOperator73(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73)                \
  if (index == 72) {                                                           \
    return QVariant(v73);                                                      \
  }                                                                            \
  insertIndexMacrosOperator72(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72);

#define insertIndexMacrosOperator74(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74)           \
  if (index == 73) {                                                           \
    return QVariant(v74);                                                      \
  }                                                                            \
  insertIndexMacrosOperator73(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73);

#define insertIndexMacrosOperator75(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75)      \
  if (index == 74) {                                                           \
    return QVariant(v75);                                                      \
  }                                                                            \
  insertIndexMacrosOperator74(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74);

#define insertIndexMacrosOperator76(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76) \
  if (index == 75) {                                                           \
    return QVariant(v76);                                                      \
  }                                                                            \
  insertIndexMacrosOperator75(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75);

#define insertIndexMacrosOperator77(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77)                                                                       \
  if (index == 76) {                                                           \
    return QVariant(v77);                                                      \
  }                                                                            \
  insertIndexMacrosOperator76(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76);

#define insertIndexMacrosOperator78(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78)                                                                  \
  if (index == 77) {                                                           \
    return QVariant(v78);                                                      \
  }                                                                            \
  insertIndexMacrosOperator77(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77);

#define insertIndexMacrosOperator79(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79)                                                             \
  if (index == 78) {                                                           \
    return QVariant(v79);                                                      \
  }                                                                            \
  insertIndexMacrosOperator78(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78);

#define insertIndexMacrosOperator80(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80)                                                        \
  if (index == 79) {                                                           \
    return QVariant(v80);                                                      \
  }                                                                            \
  insertIndexMacrosOperator79(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79);

#define insertIndexMacrosOperator81(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81)                                                   \
  if (index == 80) {                                                           \
    return QVariant(v81);                                                      \
  }                                                                            \
  insertIndexMacrosOperator80(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80);

#define insertIndexMacrosOperator82(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82)                                              \
  if (index == 81) {                                                           \
    return QVariant(v82);                                                      \
  }                                                                            \
  insertIndexMacrosOperator81(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81);

#define insertIndexMacrosOperator83(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83)                                         \
  if (index == 82) {                                                           \
    return QVariant(v83);                                                      \
  }                                                                            \
  insertIndexMacrosOperator82(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82);

#define insertIndexMacrosOperator84(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84)                                    \
  if (index == 83) {                                                           \
    return QVariant(v84);                                                      \
  }                                                                            \
  insertIndexMacrosOperator83(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83);

#define insertIndexMacrosOperator85(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85)                               \
  if (index == 84) {                                                           \
    return QVariant(v85);                                                      \
  }                                                                            \
  insertIndexMacrosOperator84(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84);

#define insertIndexMacrosOperator86(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85, v86)                          \
  if (index == 85) {                                                           \
    return QVariant(v86);                                                      \
  }                                                                            \
  insertIndexMacrosOperator85(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85);

#define insertIndexMacrosOperator87(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87)                     \
  if (index == 86) {                                                           \
    return QVariant(v87);                                                      \
  }                                                                            \
  insertIndexMacrosOperator86(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86);

#define insertIndexMacrosOperator88(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88)                \
  if (index == 87) {                                                           \
    return QVariant(v88);                                                      \
  }                                                                            \
  insertIndexMacrosOperator87(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86,    \
      v87);

#define insertIndexMacrosOperator89(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89)           \
  if (index == 88) {                                                           \
    return QVariant(v89);                                                      \
  }                                                                            \
  insertIndexMacrosOperator88(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86,    \
      v87, v88);

#define insertIndexMacrosOperator90(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90)      \
  if (index == 89) {                                                           \
    return QVariant(v90);                                                      \
  }                                                                            \
  insertIndexMacrosOperator89(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86,    \
      v87, v88, v89);

#define insertIndexMacrosOperator91(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91) \
  if (index == 90) {                                                           \
    return QVariant(v91);                                                      \
  }                                                                            \
  insertIndexMacrosOperator90(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86,    \
      v87, v88, v89, v90);

#define insertIndexMacrosOperator92(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, \
    v92)                                                                       \
  if (index == 91) {                                                           \
    return QVariant(v92);                                                      \
  }                                                                            \
  insertIndexMacrosOperator91(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86,    \
      v87, v88, v89, v90, v91);

#define insertIndexMacrosOperator93(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, \
    v92, v93)                                                                  \
  if (index == 92) {                                                           \
    return QVariant(v93);                                                      \
  }                                                                            \
  insertIndexMacrosOperator92(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86,    \
      v87, v88, v89, v90, v91, v92);

#define insertIndexMacrosOperator94(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, \
    v92, v93, v94)                                                             \
  if (index == 93) {                                                           \
    return QVariant(v94);                                                      \
  }                                                                            \
  insertIndexMacrosOperator93(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86,    \
      v87, v88, v89, v90, v91, v92, v93);

#define insertIndexMacrosOperator95(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, \
    v92, v93, v94, v95)                                                        \
  if (index == 94) {                                                           \
    return QVariant(v95);                                                      \
  }                                                                            \
  insertIndexMacrosOperator94(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86,    \
      v87, v88, v89, v90, v91, v92, v93, v94);

#define insertIndexMacrosOperator96(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, \
    v92, v93, v94, v95, v96)                                                   \
  if (index == 95) {                                                           \
    return QVariant(v96);                                                      \
  }                                                                            \
  insertIndexMacrosOperator95(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86,    \
      v87, v88, v89, v90, v91, v92, v93, v94, v95);

#define insertIndexMacrosOperator97(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, \
    v92, v93, v94, v95, v96, v97)                                              \
  if (index == 96) {                                                           \
    return QVariant(v97);                                                      \
  }                                                                            \
  insertIndexMacrosOperator96(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86,    \
      v87, v88, v89, v90, v91, v92, v93, v94, v95, v96);

#define insertIndexMacrosOperator98(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, \
    v92, v93, v94, v95, v96, v97, v98)                                         \
  if (index == 97) {                                                           \
    return QVariant(v98);                                                      \
  }                                                                            \
  insertIndexMacrosOperator97(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86,    \
      v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97);

#define insertIndexMacrosOperator99(                                           \
    v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,     \
    v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, \
    v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, \
    v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, \
    v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, \
    v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, \
    v92, v93, v94, v95, v96, v97, v98, v99)                                    \
  if (index == 98) {                                                           \
    return QVariant(v99);                                                      \
  }                                                                            \
  insertIndexMacrosOperator98(                                                 \
      v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16,   \
      v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30,    \
      v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,    \
      v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58,    \
      v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72,    \
      v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86,    \
      v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97, v98);

#endif  // INSERTINDEXMACROSOPERATORINBASEMODEL_H
