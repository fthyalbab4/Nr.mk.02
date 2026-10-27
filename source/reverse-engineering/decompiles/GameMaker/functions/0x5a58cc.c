// rea decompile_all
// name: FUN_005a58cc
// address: 0x5a58cc
// body: available
// range: 0x5a58cc-0x5a58e7 inclusive
// range: 0x5a5908-0x5a5c3b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005a58cc(uint param_1,uint param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bStack_1b;
  byte bStack_1a;
  byte bStack_19;
  byte bStack_17;
  byte bStack_16;
  byte bStack_15;
  undefined4 local_14;
  undefined1 local_10;
  byte local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;

  bStack_15 = (byte)(param_2 >> 0x18);
  bStack_1b = (byte)(param_1 >> 8);
  bStack_1a = (byte)(param_1 >> 0x10);
  bStack_19 = (byte)(param_1 >> 0x18);
  switch(param_3) {
  case 0:
    local_14 = param_2;
    break;
  case 1:
    local_14 = param_1;
    if ((bStack_15 != 0) && (local_14 = param_2, bStack_15 != 0xff)) {
      bStack_17 = (byte)(param_2 >> 8);
      bStack_16 = (byte)(param_2 >> 0x10);
      if (bStack_19 == 0xff) {
        uVar4 = (uint)bStack_15;
        iVar6 = 0x100 - uVar4;
        local_14 = CONCAT13(0xff,(int3)CONCAT31(CONCAT21((short)(bStack_16 * uVar4 +
                                                                 (uint)bStack_1a * iVar6 >> 8),
                                                         (char)(bStack_17 * uVar4 +
                                                                (uint)bStack_1b * iVar6 >> 8)),
                                                (char)((param_2 & 0xff) * uVar4 +
                                                       (param_1 & 0xff) * iVar6 >> 8)));
      }
      else {
        uVar4 = (uint)bStack_15;
        iVar5 = (int)((0xff - uVar4) * (uint)bStack_19) / 0xff;
        iVar6 = iVar5 + uVar4;
        local_14 = CONCAT31(CONCAT21((short)((int)(bStack_16 * uVar4 + (uint)bStack_1a * iVar5) /
                                            iVar6),
                                     (char)((int)(bStack_17 * uVar4 + (uint)bStack_1b * iVar5) /
                                           iVar6)),
                            (char)((int)((param_2 & 0xff) * uVar4 + (param_1 & 0xff) * iVar5) /
                                  iVar6)) & 0xffffff;
      }
    }
    break;
  case 2:
    local_14 = param_1;
    if (bStack_15 != 0) {
      local_14 = param_1 & 0xffffff;
    }
    break;
  case 3:
    local_14 = param_1;
    if (bStack_15 != 0) {
      local_14 = param_1 & 0xffffff;
    }
    break;
  case 4:
    local_14 = param_1;
    if (bStack_15 != 0) {
      FUN_005a5458(param_1,&local_10,&local_f,&local_a,&local_e);
      FUN_005a5458(param_2,&local_d,&local_c,&local_9,&local_b);
      local_14 = FUN_005a5648(local_d,local_f,local_e,local_a);
    }
    break;
  case 5:
    local_14 = param_1;
    if (bStack_15 != 0) {
      iVar5 = (bStack_15 >> 4) + 1;
      iVar6 = (uint)bStack_1a - iVar5;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      iVar2 = (uint)bStack_1b - iVar5;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      iVar5 = (param_1 & 0xff) - iVar5;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      local_14 = CONCAT13(bStack_19,(int3)CONCAT31(CONCAT21((short)iVar6,(char)iVar2),(char)iVar5));
    }
    break;
  case 6:
    local_14 = param_1;
    if (bStack_15 != 0) {
      iVar6 = (bStack_15 >> 4) + 1;
      uVar1 = (undefined2)((uint)bStack_1a + iVar6);
      if (0xff < (uint)bStack_1a + iVar6) {
        uVar1 = 0xff;
      }
      uVar4 = (uint)bStack_1b + iVar6;
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      uVar3 = (param_1 & 0xff) + iVar6;
      if (0xff < uVar3) {
        uVar3 = 0xff;
      }
      local_14 = CONCAT13(bStack_19,(int3)CONCAT31(CONCAT21(uVar1,(char)uVar4),(char)uVar3));
    }
    break;
  case 7:
    local_14 = param_1;
    if (bStack_15 != 0) {
      FUN_005a5458(param_1,&local_10,&local_f,&local_a,&local_e);
      if (local_f != 0) {
        uVar4 = (uint)local_f + (bStack_15 >> 4) + 1;
        if (0xff < uVar4) {
          uVar4 = 0xff;
        }
        local_14 = FUN_005a5648(local_10,uVar4,local_e,local_a);
      }
    }
  }
  return local_14;
}
