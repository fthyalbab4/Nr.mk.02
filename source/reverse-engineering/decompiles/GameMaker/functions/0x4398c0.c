// rea decompile_all
// name: FUN_004398c0
// address: 0x4398c0
// body: available
// range: 0x4398c0-0x439965 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4398dd (push 0x439966 followed by fs-segment stack chaining); handler 0x439966 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004398c0(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_00439966;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00405954(param_2,&local_8);
  iVar2 = FUN_0043976c(param_1,local_8);
  if ((iVar2 != 0) && (param_2 != iVar2)) {
    local_10 = local_8;
    local_c = 0x11;
    FUN_0041c0bc(&PTR_LAB_0042e9c4,1,PTR_PTR_0078230c,0,&local_10);
    FUN_00406618();
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = FUN_0043f190(&PTR_FUN_00432364,1);
    *(undefined4 *)(param_1 + 4) = uVar3;
    FUN_0043f0cc(uVar3,1);
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4),local_8,param_2);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0043996d;
  puStack_24 = (undefined1 *)0x439965;
  thunk_FUN_00406e5c(&local_8,uStack_28,puVar1);
  return;
}
