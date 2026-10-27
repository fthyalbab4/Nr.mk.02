// rea decompile_all
// name: FUN_004197bc
// address: 0x4197bc
// body: available
// range: 0x4197bc-0x419904 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004197bc(short *param_1,ushort *param_2,short *param_3,undefined2 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  short sVar7;
  undefined1 local_28 [4];
  int local_24;
  short local_20;
  ushort local_1e;
  short *local_1c;
  ushort *local_14;
  short *local_c;

  local_1c = param_3;
  local_14 = param_2;
  local_c = param_1;
  FUN_00419534(local_28,param_2,param_3,param_5,param_6);
  if (local_24 < 1) {
    *local_c = 0;
    *local_14 = 0;
    *local_1c = 0;
    *param_4 = 0;
    uVar5 = 0;
  }
  else {
    iVar6 = local_24 % 7 + 1;
    *param_4 = (short)iVar6;
    sVar7 = 1;
    for (local_24 = local_24 + -1; 0x23ab0 < local_24; local_24 = local_24 + -0x23ab1) {
      sVar7 = sVar7 + 400;
    }
    FUN_004154b8(local_24,CONCAT22((short)((uint)iVar6 >> 0x10),0x8eac),&local_20,&local_1e);
    if (local_20 == 4) {
      local_20 = 3;
      local_1e = local_1e + 0x8eac;
    }
    sVar3 = local_20 * 100;
    FUN_004154b8(local_1e,CONCAT22(extraout_var,0x5b5),&local_20,&local_1e);
    sVar2 = local_20 * 4;
    FUN_004154b8(local_1e,CONCAT22(extraout_var_00,0x16d),&local_20,&local_1e);
    if (local_20 == 4) {
      local_20 = 3;
      local_1e = local_1e + 0x16d;
    }
    sVar7 = sVar7 + sVar3 + sVar2 + local_20;
    uVar5 = FUN_00419684(sVar7);
    uVar4 = 1;
    for (; uVar1 = *(ushort *)((uVar5 & 0xff) * 0x18 + 0x773b82 + (uint)uVar4 * 2),
        uVar1 <= local_1e; local_1e = local_1e - uVar1) {
      uVar4 = uVar4 + 1;
    }
    *local_c = sVar7;
    *local_14 = uVar4;
    *local_1c = local_1e + 1;
  }
  return uVar5;
}
