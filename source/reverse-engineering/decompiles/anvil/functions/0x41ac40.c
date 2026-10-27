// rea decompile_all
// name: FUN_0041ac40
// address: 0x41ac40
// body: available
// range: 0x41ac40-0x41ae1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0041ac40(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_stack_ffffffd0;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 local_18 [4];
  undefined1 local_14 [4];

  iVar3 = -1;
  local_20 = param_3;
  cVar1 = FUN_0041a4f0(param_1,param_2,DAT_0068cca4);
  if ((cVar1 == '\0') && (cVar1 = FUN_0041a4f0(param_1,param_2,&PTR_PTR_0041ae2c), cVar1 == '\0')) {
    cVar1 = FUN_0041a4f0(param_1,param_2,DAT_0068cca8);
    if ((cVar1 != '\0') || (cVar1 = FUN_0041a4f0(param_1,param_2,&LAB_0041ae40), cVar1 != '\0')) {
      iVar3 = 0xc;
    }
  }
  else {
    iVar3 = 0;
  }
  if (-1 < iVar3) {
    FUN_0041a3bc(param_1,param_2);
  }
  cVar1 = FUN_0041a428(param_1,param_2,&local_1c,local_14);
  if (cVar1 == '\0') {
    return 0;
  }
  local_20 = local_20 & 0xffff;
  local_1c = 0;
  local_1a = 0;
  local_28 = (undefined1 *)0x41acf2;
  cVar1 = FUN_0041a5d0(param_1,param_2,DAT_0068cca0);
  if (cVar1 != '\0') {
    local_28 = local_18;
    cVar1 = FUN_0041a428(param_1,param_2,(int)&local_20 + 2);
    if (cVar1 == '\0') {
      return 0;
    }
    local_2c = (undefined2 *)0x41ad20;
    cVar1 = FUN_0041a5d0(param_1,param_2,DAT_0068cca0);
    if (cVar1 != '\0') {
      local_2c = &local_1c;
      cVar1 = FUN_0041a428(param_1,param_2,&local_20);
      if (cVar1 == '\0') {
        return 0;
      }
      in_stack_ffffffd0 = (undefined4 *)0x41ad4e;
      cVar1 = FUN_0041a5d0(param_1,param_2,DAT_0068cc90);
      if (cVar1 != '\0') {
        in_stack_ffffffd0 = &local_20;
        cVar1 = FUN_0041a428(param_1,param_2,&stack0xffffffde,in_stack_ffffffd0);
        if (cVar1 == '\0') {
          return 0;
        }
      }
    }
  }
  if (iVar3 < 0) {
    cVar1 = FUN_0041a4f0(param_1,param_2,DAT_0068cca4);
    if ((cVar1 == '\0') && (cVar1 = FUN_0041a4f0(param_1,param_2,&PTR_PTR_0041ae2c), cVar1 == '\0'))
    {
      cVar1 = FUN_0041a4f0(param_1,param_2,DAT_0068cca8);
      if ((cVar1 != '\0') || (cVar1 = FUN_0041a4f0(param_1,param_2,&LAB_0041ae40), cVar1 != '\0')) {
        iVar3 = 0xc;
      }
    }
    else {
      iVar3 = 0;
    }
  }
  if (-1 < iVar3) {
    if ((ushort)local_2c == 0) {
      return 0;
    }
    if (0xc < (ushort)local_2c) {
      return 0;
    }
    if ((ushort)local_2c == 0xc) {
      local_2c = (undefined2 *)((uint)local_2c & 0xffff0000);
    }
    local_2c = (undefined2 *)CONCAT22(local_2c._2_2_,(ushort)local_2c + (short)iVar3);
  }
  FUN_0041a3bc(param_1,param_2);
  uVar2 = FUN_00419118((uint)local_2c & 0xffff,local_2c._2_2_,(uint)local_28 & 0xffff,
                       in_stack_ffffffd0,(uint)local_28 >> 0x10);
  return uVar2;
}
