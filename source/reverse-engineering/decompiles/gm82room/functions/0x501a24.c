// rea decompile_all
// name: FUN_00501a24
// address: 0x501a24
// body: available
// range: 0x501a24-0x501ada inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x501a3b (push 0x501adb followed by fs-segment stack chaining); handler 0x501adb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00501a24(int *param_1,uint param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00501adb;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar1 = (ushort)param_2;
  uVar6 = param_2;
  if ((ushort)(uVar1 - 0x61) < 0x1a) {
    uVar6 = (uint)(uVar1 & 0xffdf);
  }
  iVar3 = FUN_00502800(param_1);
  uVar5 = (ushort)iVar3;
  uVar4 = (ushort)(iVar3 + -0x61);
  if (uVar4 < 0x1a) {
    uVar5 = uVar5 & 0xffdf;
  }
  if (uVar5 != (ushort)uVar6) {
    if (uVar1 != 0) {
      FUN_00408310(&local_8,param_2,CONCAT22((short)((uint)(iVar3 + -0x61) >> 0x10),uVar4 - 0x1a));
      FUN_004085b8(&local_8,&LAB_00501af4);
      FUN_004044c8(local_8);
      FUN_0040448c();
      FUN_00408d90(0,param_1 + 0xc1);
    }
    if ((char)param_1[0xbd] == '\0') {
      (**(code **)(*param_1 + 0x138))();
      (**(code **)(*param_1 + 0x130))();
    }
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00501ae2;
  puStack_1c = (undefined1 *)0x501ada;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar2);
  return;
}
