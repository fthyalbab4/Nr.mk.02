// rea decompile_all
// name: FUN_0047ea98
// address: 0x47ea98
// body: available
// range: 0x47ea98-0x47eb92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47eaaf (push 0x47eb93 followed by fs-segment stack chaining); handler 0x47eb93 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047ea98(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  HWND hWnd;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0047eb93;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (((PTR_DAT_00782974[0xc] == '\0') || (*(int *)PTR_DAT_00782944 == 2)) ||
     ((*(byte *)((int)param_2 + 5) & 8) == 0)) {
    uVar2 = FUN_0040ea68(param_2[2],param_2 + 0x13,&LAB_0047eba0,param_2[8],DAT_00785c40,0,
                         param_2[7],param_2[6],param_2[5],param_2[4],param_2[3],param_2[1]);
    *(undefined4 *)(param_1 + 600) = uVar2;
  }
  else {
    puStack_18 = &stack0xfffffffc;
    hWnd = (HWND)FUN_0040ea68(param_2[2],param_2 + 0x13,&LAB_0047eba0,param_2[8],DAT_00785c40,0,
                              param_2[7],param_2[6],param_2[5],param_2[4],param_2[3],
                              param_2[1] & 0xfffff7ff);
    *(HWND *)(param_1 + 600) = hWnd;
    if (hWnd != (HWND)0x0) {
      SendMessageW(hWnd,0xcf,1,0);
    }
  }
  FUN_00408074(&local_8,*param_2);
  uVar2 = local_8;
  FUN_0040ef5c(*(undefined4 *)(param_1 + 600),0xc,0);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uVar2;
  puStack_1c = &LAB_0047eb9a;
  uStack_20 = 0x47eb92;
  thunk_FUN_00406e5c(&local_8,uVar2,puVar1);
  return;
}
