// rea decompile_all
// name: FUN_00478878
// address: 0x478878
// body: available
// range: 0x478878-0x478972 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47888f (push 0x478973 followed by fs-segment stack chaining); handler 0x478973 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00478878(int param_1,undefined4 *param_2)

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
  puStack_1c = &LAB_00478973;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (((PTR_DAT_00689688[0xc] == '\0') || (*(int *)PTR_DAT_0068966c == 2)) ||
     ((*(byte *)((int)param_2 + 5) & 8) == 0)) {
    uVar2 = FUN_0040ec30(param_2[2],param_2 + 0x13,&LAB_00478980,param_2[8],DAT_0068cc40,0,
                         param_2[7],param_2[6],param_2[5],param_2[4],param_2[3],param_2[1]);
    *(undefined4 *)(param_1 + 600) = uVar2;
  }
  else {
    puStack_18 = &stack0xfffffffc;
    hWnd = (HWND)FUN_0040ec30(param_2[2],param_2 + 0x13,&LAB_00478980,param_2[8],DAT_0068cc40,0,
                              param_2[7],param_2[6],param_2[5],param_2[4],param_2[3],
                              param_2[1] & 0xfffff7ff);
    *(HWND *)(param_1 + 600) = hWnd;
    if (hWnd != (HWND)0x0) {
      SendMessageW(hWnd,0xcf,1,0);
    }
  }
  FUN_00408350(&local_8,*param_2);
  uVar2 = local_8;
  FUN_0040f050(*(undefined4 *)(param_1 + 600),0xc,0);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uVar2;
  puStack_1c = &LAB_0047897a;
  uStack_20 = 0x478972;
  thunk_FUN_004072d8(&local_8,uVar2,puVar1);
  return;
}
