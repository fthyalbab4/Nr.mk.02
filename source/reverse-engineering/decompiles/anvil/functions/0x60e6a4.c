// rea decompile_all
// name: FUN_0060e6a4
// address: 0x60e6a4
// body: available
// range: 0x60e6a4-0x60e8ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_0060e6a4(int param_1,char param_2,undefined4 param_3,double param_4,double param_5,
            double param_6,double param_7)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 local_60 [16];
  int local_50;
  double local_4c;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  undefined1 local_5;

  local_5 = 0;
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
      local_50 = *(int *)(param_1 + 0xc4) + 1;
      if (local_24 < (double)local_50) {
        if (param_6 <= param_4) {
          local_2c = param_4;
        }
        else {
          local_2c = param_6;
        }
        if ((((double)*(int *)(param_1 + 0xbc) <= local_2c) &&
            (*(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x28) != 0.0)) &&
           (*(char *)(param_1 + 0x108) == '\0')) {
          if (param_2 == '\0') {
            local_5 = 1;
          }
          else {
            if (*(int *)(param_1 + 0x44) < 0) {
              uVar3 = *(undefined4 *)(param_1 + 8);
            }
            else {
              uVar3 = *(undefined4 *)(param_1 + 0x44);
            }
            iVar2 = FUN_005799a0(uVar3);
            if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
              uVar3 = FUN_004102e4();
              if (param_5 <= param_7) {
                local_34 = param_5;
              }
              else {
                local_34 = param_7;
              }
              if (param_4 <= param_6) {
                local_3c = param_4;
              }
              else {
                local_3c = param_6;
              }
              if (param_7 <= param_5) {
                local_44 = param_5;
              }
              else {
                local_44 = param_7;
              }
              if (param_6 <= param_4) {
                local_4c = param_4;
              }
              else {
                local_4c = param_6;
              }
              uVar1 = FUN_004048b8();
              uVar4 = FUN_004048b8();
              uVar15 = *(undefined4 *)(param_1 + 0x24);
              uVar14 = *(undefined4 *)(param_1 + 0x20);
              uVar13 = *(undefined4 *)(param_1 + 0x2c);
              uVar12 = *(undefined4 *)(param_1 + 0x28);
              uVar11 = *(undefined4 *)(param_1 + 0x34);
              uVar10 = *(undefined4 *)(param_1 + 0x30);
              uVar5 = FUN_004048b8();
              puVar9 = local_60;
              uVar6 = FUN_004048b8();
              uVar7 = FUN_004048b8();
              uVar8 = FUN_004048b8();
              FUN_00436ad0(uVar8,uVar7,uVar6,puVar9,uVar5);
              local_5 = FUN_00623f1c(iVar2,uVar3,param_1 + 0xb8,local_60,uVar10,uVar11,uVar12,uVar13
                                     ,uVar14,uVar15,uVar4,uVar1);
            }
          }
        }
      }
    }
  }
  return local_5;
}
