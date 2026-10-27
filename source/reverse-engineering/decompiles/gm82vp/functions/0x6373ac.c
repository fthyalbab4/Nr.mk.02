// rea decompile_all
// name: FUN_006373ac
// address: 0x6373ac
// body: available
// range: 0x6373ac-0x637ad6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_006373ac(int param_1,int param_2,int param_3,byte param_4,int param_5,int param_6,
                 int param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_38;
  char local_d;

  local_d = '\0';
  if ((((param_2 != 0) && (*(int *)(param_1 + 4) <= param_3)) &&
      (param_3 < *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) + *(int *)(param_1 + 4))) &&
     ((*(int *)(param_1 + 8) <= param_7 &&
      (param_7 < *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 8))))) {
    iVar10 = (param_3 - *(int *)(param_1 + 4)) / *(int *)(param_1 + 0xc);
    iVar11 = (param_7 - *(int *)(param_1 + 8)) / *(int *)(param_1 + 0x10);
    if ((((-1 < *(int *)(*(int *)(param_1 + 0x1c) + (iVar10 * *(int *)(param_1 + 0x18) + iVar11) * 4
                        )) &&
         ((*(int *)(param_1 + 4) <= param_6 &&
          (param_6 < *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) + *(int *)(param_1 + 4)))))
        && (*(int *)(param_1 + 8) <= param_5)) &&
       (param_5 < *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 8))) {
      iVar12 = (param_6 - *(int *)(param_1 + 4)) / *(int *)(param_1 + 0xc);
      iVar13 = (param_5 - *(int *)(param_1 + 8)) / *(int *)(param_1 + 0x10);
      if (-1 < *(int *)(*(int *)(param_1 + 0x1c) + (iVar12 * *(int *)(param_1 + 0x18) + iVar13) * 4)
         ) {
        iVar15 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(iVar15 + (iVar10 * *(int *)(param_1 + 0x18) + iVar11) * 4) = 1;
        piVar14 = (int *)FUN_0044a984(&PTR_LAB_0044a758,CONCAT31((int3)((uint)iVar15 >> 8),1));
        FUN_0044a96c(piVar14,iVar10 * *(int *)(param_1 + 0x18) + iVar11);
        while (cVar9 = FUN_0044a950(piVar14,1), cVar9 != '\0') {
          iVar15 = (**(code **)(*piVar14 + 4))();
          iVar16 = iVar15 / *(int *)(param_1 + 0x18);
          iVar17 = iVar15 % *(int *)(param_1 + 0x18);
          if ((iVar16 == iVar12) && (iVar17 == iVar13)) {
            local_d = '\x01';
            break;
          }
          iVar15 = *(int *)(*(int *)(param_1 + 0x1c) + iVar15 * 4) + 1;
          if (((iVar16 < 1) || (*(int *)(param_1 + 0x18) + -1 <= iVar17)) ||
             (*(int *)(*(int *)(param_1 + 0x1c) +
                      ((iVar16 + -1) * *(int *)(param_1 + 0x18) + iVar17 + 1) * 4) != 0)) {
            bVar5 = 0;
          }
          else {
            bVar5 = 1;
          }
          if ((iVar17 < *(int *)(param_1 + 0x18) + -1) &&
             (*(int *)(*(int *)(param_1 + 0x1c) +
                      (iVar16 * *(int *)(param_1 + 0x18) + iVar17 + 1) * 4) == 0)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (((iVar16 < *(int *)(param_1 + 0x14) + -1) && (iVar17 < *(int *)(param_1 + 0x18) + -1))
             && (*(int *)(*(int *)(param_1 + 0x1c) +
                         ((iVar16 + 1) * *(int *)(param_1 + 0x18) + iVar17 + 1) * 4) == 0)) {
            bVar6 = 1;
          }
          else {
            bVar6 = 0;
          }
          if ((iVar16 < 1) ||
             (*(int *)(*(int *)(param_1 + 0x1c) +
                      ((iVar16 + -1) * *(int *)(param_1 + 0x18) + iVar17) * 4) != 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((iVar16 < *(int *)(param_1 + 0x14) + -1) &&
             (*(int *)(*(int *)(param_1 + 0x1c) +
                      ((iVar16 + 1) * *(int *)(param_1 + 0x18) + iVar17) * 4) == 0)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (((iVar16 < 1) || (iVar17 < 1)) ||
             (*(int *)(*(int *)(param_1 + 0x1c) +
                      ((iVar16 + -1) * *(int *)(param_1 + 0x18) + iVar17 + -1) * 4) != 0)) {
            bVar7 = 0;
          }
          else {
            bVar7 = 1;
          }
          if ((iVar17 < 1) ||
             (*(int *)(*(int *)(param_1 + 0x1c) +
                      (iVar16 * *(int *)(param_1 + 0x18) + iVar17 + -1) * 4) != 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (((iVar16 < *(int *)(param_1 + 0x14) + -1) && (0 < iVar17)) &&
             (*(int *)(*(int *)(param_1 + 0x1c) +
                      ((iVar16 + 1) * *(int *)(param_1 + 0x18) + iVar17 + -1) * 4) == 0)) {
            bVar8 = 1;
          }
          else {
            bVar8 = 0;
          }
          if (bVar1) {
            *(int *)(*(int *)(param_1 + 0x1c) +
                    ((iVar16 + -1) * *(int *)(param_1 + 0x18) + iVar17) * 4) = iVar15;
            FUN_0044a96c(piVar14,(iVar16 + -1) * *(int *)(param_1 + 0x18) + iVar17);
          }
          if (bVar2) {
            *(int *)(*(int *)(param_1 + 0x1c) +
                    ((iVar16 + 1) * *(int *)(param_1 + 0x18) + iVar17) * 4) = iVar15;
            FUN_0044a96c(piVar14,(iVar16 + 1) * *(int *)(param_1 + 0x18) + iVar17);
          }
          if (bVar3) {
            *(int *)(*(int *)(param_1 + 0x1c) + -4 +
                    (iVar16 * *(int *)(param_1 + 0x18) + iVar17) * 4) = iVar15;
            FUN_0044a96c(piVar14,iVar16 * *(int *)(param_1 + 0x18) + iVar17 + -1);
          }
          if (bVar4) {
            *(int *)(*(int *)(param_1 + 0x1c) + 4 + (iVar16 * *(int *)(param_1 + 0x18) + iVar17) * 4
                    ) = iVar15;
            FUN_0044a96c(piVar14,iVar16 * *(int *)(param_1 + 0x18) + iVar17 + 1);
          }
          if ((((param_4 & bVar5) != 0) && (bVar4)) && (bVar1)) {
            *(int *)(*(int *)(param_1 + 0x1c) + 4 +
                    ((iVar16 + -1) * *(int *)(param_1 + 0x18) + iVar17) * 4) = iVar15;
            FUN_0044a96c(piVar14,(iVar16 + -1) * *(int *)(param_1 + 0x18) + iVar17 + 1);
          }
          if ((((param_4 & bVar7) != 0) && (bVar3)) && (bVar1)) {
            *(int *)(*(int *)(param_1 + 0x1c) + -4 +
                    ((iVar16 + -1) * *(int *)(param_1 + 0x18) + iVar17) * 4) = iVar15;
            FUN_0044a96c(piVar14,(iVar16 + -1) * *(int *)(param_1 + 0x18) + iVar17 + -1);
          }
          if ((((param_4 & bVar6) != 0) && (bVar4)) && (bVar2)) {
            *(int *)(*(int *)(param_1 + 0x1c) + 4 +
                    ((iVar16 + 1) * *(int *)(param_1 + 0x18) + iVar17) * 4) = iVar15;
            FUN_0044a96c(piVar14,(iVar16 + 1) * *(int *)(param_1 + 0x18) + iVar17 + 1);
          }
          if ((((param_4 & bVar8) != 0) && (bVar3)) && (bVar2)) {
            *(int *)(*(int *)(param_1 + 0x1c) + -4 +
                    ((iVar16 + 1) * *(int *)(param_1 + 0x18) + iVar17) * 4) = iVar15;
            FUN_0044a96c(piVar14,(iVar16 + 1) * *(int *)(param_1 + 0x18) + iVar17 + -1);
          }
        }
        FUN_00405fdc(piVar14);
        if (local_d != '\0') {
          FUN_0057b024(param_2);
          FUN_0057a928(param_2,0);
          FUN_0057a944(param_2,0);
          FUN_0057b150(param_2);
          while ((iVar12 != iVar10 || (iVar13 != iVar11))) {
            iVar15 = *(int *)(*(int *)(param_1 + 0x1c) +
                             (iVar12 * *(int *)(param_1 + 0x18) + iVar13) * 4);
            if ((iVar12 < 1) ||
               ((*(int *)(param_1 + 0x18) + -1 <= iVar13 ||
                (*(int *)(*(int *)(param_1 + 0x1c) +
                         ((iVar12 + -1) * *(int *)(param_1 + 0x18) + iVar13 + 1) * 4) != iVar15 + -1
                )))) {
              bVar5 = 0;
            }
            else {
              bVar5 = 1;
            }
            if ((iVar13 < *(int *)(param_1 + 0x18) + -1) &&
               (*(int *)(*(int *)(param_1 + 0x1c) +
                        (iVar12 * *(int *)(param_1 + 0x18) + iVar13 + 1) * 4) == iVar15 + -1)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (((iVar12 < *(int *)(param_1 + 0x14) + -1) &&
                (iVar13 < *(int *)(param_1 + 0x18) + -1)) &&
               (*(int *)(*(int *)(param_1 + 0x1c) +
                        ((iVar12 + 1) * *(int *)(param_1 + 0x18) + iVar13 + 1) * 4) == iVar15 + -1))
            {
              bVar6 = 1;
            }
            else {
              bVar6 = 0;
            }
            if ((iVar12 < 1) ||
               (*(int *)(*(int *)(param_1 + 0x1c) +
                        ((iVar12 + -1) * *(int *)(param_1 + 0x18) + iVar13) * 4) != iVar15 + -1)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((iVar12 < *(int *)(param_1 + 0x14) + -1) &&
               (*(int *)(*(int *)(param_1 + 0x1c) +
                        ((iVar12 + 1) * *(int *)(param_1 + 0x18) + iVar13) * 4) == iVar15 + -1)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (((iVar12 < 1) || (iVar13 < 1)) ||
               (*(int *)(*(int *)(param_1 + 0x1c) +
                        ((iVar12 + -1) * *(int *)(param_1 + 0x18) + iVar13 + -1) * 4) != iVar15 + -1
               )) {
              bVar7 = 0;
            }
            else {
              bVar7 = 1;
            }
            if ((iVar13 < 1) ||
               (*(int *)(*(int *)(param_1 + 0x1c) +
                        (iVar12 * *(int *)(param_1 + 0x18) + iVar13 + -1) * 4) != iVar15 + -1)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (((iVar12 < *(int *)(param_1 + 0x14) + -1) && (0 < iVar13)) &&
               (*(int *)(*(int *)(param_1 + 0x1c) +
                        ((iVar12 + 1) * *(int *)(param_1 + 0x18) + iVar13 + -1) * 4) == iVar15 + -1)
               ) {
              bVar8 = 1;
            }
            else {
              bVar8 = 0;
            }
            if (bVar1) {
              iVar12 = iVar12 + -1;
            }
            else if (bVar2) {
              iVar12 = iVar12 + 1;
            }
            else if (bVar3) {
              iVar13 = iVar13 + -1;
            }
            else if (bVar4) {
              iVar13 = iVar13 + 1;
            }
            else if ((param_4 & bVar5) == 0) {
              if ((param_4 & bVar6) == 0) {
                if ((param_4 & bVar7) == 0) {
                  if ((param_4 & bVar8) != 0) {
                    iVar12 = iVar12 + 1;
                    iVar13 = iVar13 + -1;
                  }
                }
                else {
                  iVar12 = iVar12 + -1;
                  iVar13 = iVar13 + -1;
                }
              }
              else {
                iVar12 = iVar12 + 1;
                iVar13 = iVar13 + 1;
              }
            }
            else {
              iVar12 = iVar12 + -1;
              iVar13 = iVar13 + 1;
            }
            if ((iVar12 != iVar10) || (iVar13 != iVar11)) {
              FUN_0057b150(param_2);
            }
          }
          FUN_0057b150(param_2);
          FUN_0057b6ec(param_2);
        }
        local_38 = *(int *)(param_1 + 0x14);
        if (-1 < local_38 + -1) {
          iVar10 = 0;
          do {
            iVar11 = *(int *)(param_1 + 0x18);
            if (-1 < iVar11 + -1) {
              iVar12 = 0;
              do {
                if (0 < *(int *)(*(int *)(param_1 + 0x1c) +
                                (iVar10 * *(int *)(param_1 + 0x18) + iVar12) * 4)) {
                  *(undefined4 *)
                   (*(int *)(param_1 + 0x1c) + (iVar10 * *(int *)(param_1 + 0x18) + iVar12) * 4) = 0
                  ;
                }
                iVar12 = iVar12 + 1;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
            iVar10 = iVar10 + 1;
            local_38 = local_38 + -1;
          } while (local_38 != 0);
        }
      }
    }
  }
  return local_d;
}
