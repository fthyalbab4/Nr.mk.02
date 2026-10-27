// rea decompile_all
// name: FUN_00506940
// address: 0x506940
// body: available
// range: 0x506940-0x5069f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x506953 (push 0x5069f1 followed by fs-segment stack chaining); handler 0x5069f1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00506940(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_005069f1;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar2 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  if (((*(int *)(param_1 + 0x34) < 1) || (0x8000 < *(int *)(param_1 + 0x34))) ||
     (*(int *)(param_1 + 0x38) < 1)) {
    FUN_0040b75c(PTR_PTR_00781ae0,&local_8);
    FUN_0041beb8(&PTR_LAB_0042f068,1,local_8);
    FUN_00406618();
  }
  *(undefined4 *)(param_1 + 0x3c) = 4;
  *(undefined1 *)(param_1 + 0x45) = 1;
  FUN_00507f64(param_1,2);
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x1fffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0x1fffffff;
  *(undefined1 *)(param_1 + 0x70) = 1;
  uVar2 = FUN_00462144(&PTR_FUN_004587d4,1);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  FUN_00506a10(param_1);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005069f8;
  puStack_14 = (undefined1 *)0x5069f0;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
