// rea decompile_all
// name: FUN_005701f4
// address: 0x5701f4
// body: available
// range: 0x5701f4-0x5702dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x570222 (push 0x5702de followed by fs-segment stack chaining); handler 0x5702de lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005701f4(undefined4 param_1,undefined4 param_2,byte param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *in_FS_OFFSET;
  uint uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  byte local_9;
  undefined4 local_8;

  local_10 = 0;
  puStack_20 = (undefined1 *)0x570212;
  local_9 = param_3;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_24 = &LAB_005702de;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_28;
  DAT_00686a44 = DAT_00686a44 + 1;
  puStack_20 = &stack0xfffffffc;
  FUN_00409dfc(&DAT_00686a3c,&DAT_0056febc,1,DAT_00686a44);
  FUN_00409dfc(&DAT_00686a40,&DAT_0056feec,1,DAT_00686a44);
  FUN_0041636c(DAT_00686a44 + -1,&local_10);
  FUN_00408678(DAT_00686a40 + -4 + DAT_00686a44 * 4,L"__newbackground",local_10);
  uVar3 = FUN_0056fda8(&DAT_0056efc8,1);
  *(undefined4 *)(DAT_00686a3c + -4 + DAT_00686a44 * 4) = uVar3;
  uVar4 = (uint)local_9;
  cVar2 = FUN_0056f9d8(*(undefined4 *)(DAT_00686a3c + -4 + DAT_00686a44 * 4),local_8,param_2);
  puVar1 = puStack_24;
  if (cVar2 == '\0') {
    DAT_00686a44 = DAT_00686a44 + -1;
  }
  *in_FS_OFFSET = uVar4;
  puStack_24 = &LAB_005702e5;
  uStack_28 = 0x5702d5;
  thunk_FUN_004072d8(&local_10,uVar4,puVar1);
  uStack_28 = 0x5702dd;
  thunk_FUN_004072d8(&local_8);
  return;
}
