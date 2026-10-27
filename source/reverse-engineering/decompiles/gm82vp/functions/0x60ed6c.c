// rea decompile_all
// name: FUN_0060ed6c
// address: 0x60ed6c
// body: available
// range: 0x60ed6c-0x60f01e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0060ed6c(int param_1,char param_2,undefined4 param_3,double param_4,double param_5,
            double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;

  uVar11 = 0;
  if (param_5 <= param_7) {
    local_14 = param_5;
  }
  else {
    local_14 = param_7;
  }
  if (local_14 < (double)(*(int *)(param_1 + 0xc0) + 1)) {
    if (param_7 <= param_5) {
      local_1c = param_5;
    }
    else {
      local_1c = param_7;
    }
    if ((double)*(int *)(param_1 + 0xb8) <= local_1c) {
      if (param_4 <= param_6) {
        local_24 = param_4;
      }
      else {
        local_24 = param_6;
      }
      if (local_24 < (double)(*(int *)(param_1 + 0xc4) + 1)) {
        if (param_6 <= param_4) {
          local_2c = param_4;
        }
        else {
          local_2c = param_6;
        }
        if (((double)*(int *)(param_1 + 0xbc) <= local_2c) && (*(char *)(param_1 + 0x108) == '\0'))
        {
          if (param_5 < param_7) {
            dVar1 = param_7;
            param_7 = param_5;
            dVar2 = param_6;
            param_6 = param_4;
            param_4 = dVar2;
            param_5 = dVar1;
          }
          if (param_7 < (double)*(int *)(param_1 + 0xb8)) {
            param_6 = ((param_4 - param_6) * ((double)*(int *)(param_1 + 0xb8) - param_7)) /
                      (param_5 - param_7) + param_6;
            param_7 = (double)*(int *)(param_1 + 0xb8);
          }
          if ((double)(*(int *)(param_1 + 0xc0) + 1) < param_5) {
            param_4 = ((param_4 - param_6) * ((double)(*(int *)(param_1 + 0xc0) + 1) - param_5)) /
                      (param_5 - param_7) + param_4;
          }
          if (((((double)*(int *)(param_1 + 0xbc) <= param_6) ||
               ((double)*(int *)(param_1 + 0xbc) <= param_4)) &&
              ((param_6 < (double)(*(int *)(param_1 + 0xc4) + 1) ||
               (param_4 < (double)(*(int *)(param_1 + 0xc4) + 1))))) &&
             (*(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x28) != 0.0)) {
            if (param_2 == '\0') {
              uVar11 = 1;
            }
            else {
              iVar3 = *(int *)(param_1 + 0x44);
              if (iVar3 < 0) {
                iVar3 = *(int *)(param_1 + 8);
              }
              iVar3 = FUN_005799a0(iVar3);
              if ((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) {
                uVar4 = FUN_004048b8();
                uVar5 = FUN_004048b8();
                uVar11 = *(undefined4 *)(param_1 + 0x24);
                uVar16 = *(undefined4 *)(param_1 + 0x20);
                uVar15 = *(undefined4 *)(param_1 + 0x2c);
                uVar14 = *(undefined4 *)(param_1 + 0x28);
                uVar13 = *(undefined4 *)(param_1 + 0x34);
                uVar12 = *(undefined4 *)(param_1 + 0x30);
                uVar6 = FUN_004048b8();
                uVar7 = FUN_004048b8();
                uVar8 = FUN_004048b8();
                uVar9 = FUN_004048b8();
                uVar10 = FUN_004102e4();
                uVar11 = FUN_00624014(iVar3,uVar10,param_1 + 0xb8,uVar9,uVar8,uVar7,uVar6,uVar12,
                                      uVar13,uVar14,uVar15,uVar16,uVar11,uVar5,uVar4);
              }
            }
          }
        }
      }
    }
  }
  return uVar11;
}
