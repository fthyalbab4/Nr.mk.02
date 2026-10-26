// rea decompile_all
// name: FUN_00525468
// address: 0x525468
// body: available
// range: 0x525468-0x52552a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x525485 (push 0x52552b followed by fs-segment stack chaining); handler 0x52552b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00525468(int param_1,int *param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined2 local_e;
  undefined1 local_c;
  undefined2 local_b;
  undefined1 local_9;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  puStack_24 = &LAB_0052552b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_2;
  bVar2 = FUN_0052ebf8(*(undefined4 *)(param_1 + 4));
  if (bVar2 == 0) {
    FUN_0040b9d0(&LAB_0051eb14,&local_14);
    FUN_0051eddc(local_14);
  }
  local_e = 0x4947;
  local_c = 0x46;
  local_b = *(undefined2 *)((int)&DAT_006844dc + (uint)bVar2 * 3 + 1);
  local_9 = *(undefined1 *)((int)&DAT_006844dc + (uint)bVar2 * 3 + 3);
  FUN_0052542c(param_1);
  (**(code **)(*local_8 + 0x10))(local_8,&local_e,6);
  (**(code **)(*local_8 + 0x10))(local_8,param_1 + 8,7);
  if ((*(byte *)(param_1 + 0xc) & 0x80) == 0x80) {
    FUN_00524380(*(undefined4 *)(param_1 + 0x10),local_8);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00525532;
  puStack_24 = (undefined1 *)0x52552a;
  thunk_FUN_004072d8(&local_14,uStack_28,puVar1);
  return;
}
