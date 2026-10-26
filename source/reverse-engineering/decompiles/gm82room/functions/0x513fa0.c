// rea decompile_all
// name: FUN_00513fa0
// address: 0x513fa0
// body: available
// range: 0x513fa0-0x514089 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x513fce (push 0x51408a followed by fs-segment stack chaining); handler 0x51408a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513fa0(undefined4 param_1,undefined4 param_2,byte param_3)

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
  puStack_20 = (undefined1 *)0x513fbe;
  local_9 = param_3;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_24 = &LAB_0051408a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_28;
  DAT_006840c8 = DAT_006840c8 + 1;
  puStack_20 = &stack0xfffffffc;
  FUN_00409dfc(&DAT_006840c0,&DAT_00513c3c,1,DAT_006840c8);
  FUN_00409dfc(&DAT_006840c4,&DAT_00513c68,1,DAT_006840c8);
  FUN_0041636c(DAT_006840c8 + -1,&local_10);
  FUN_00408678(DAT_006840c4 + -4 + DAT_006840c8 * 4,L"__newsound",local_10);
  uVar3 = FUN_00513894(&DAT_005134b8,1);
  *(undefined4 *)(DAT_006840c0 + -4 + DAT_006840c8 * 4) = uVar3;
  uVar4 = (uint)local_9;
  cVar2 = FUN_00513a14(*(undefined4 *)(DAT_006840c0 + -4 + DAT_006840c8 * 4),local_8,param_2);
  puVar1 = puStack_24;
  if (cVar2 == '\0') {
    DAT_006840c8 = DAT_006840c8 + -1;
  }
  *in_FS_OFFSET = uVar4;
  puStack_24 = &LAB_00514091;
  uStack_28 = 0x514081;
  thunk_FUN_004072d8(&local_10,uVar4,puVar1);
  uStack_28 = 0x514089;
  thunk_FUN_004072d8(&local_8);
  return;
}
