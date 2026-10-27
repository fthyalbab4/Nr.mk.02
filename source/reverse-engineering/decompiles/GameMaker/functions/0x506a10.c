// rea decompile_all
// name: FUN_00506a10
// address: 0x506a10
// body: available
// range: 0x506a10-0x506ab0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x506a2f (push 0x506ab1 followed by fs-segment stack chaining); handler 0x506ab1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00506a10(int param_1)

{
  HBITMAP pHVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 local_1c [16];
  HDC local_c;
  int local_8;

  local_8 = param_1;
  local_c = GetDC((HWND)0x0);
  uVar7 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd4;
  piVar5 = *(int **)(local_8 + 0x54);
  pHVar1 = CreateCompatibleBitmap(local_c,*(int *)(local_8 + 0x38),*(int *)(local_8 + 0x34));
  FUN_00463a4c(piVar5,pHVar1);
  iVar2 = FUN_00462a64(piVar5);
  FUN_0045bc24(*(undefined4 *)(iVar2 + 0x48),0);
  uVar3 = (**(code **)(*piVar5 + 0x24))();
  puVar6 = local_1c;
  uVar4 = (**(code **)(*piVar5 + 0x30))();
  FUN_00438c38(0,0,uVar4,puVar6,uVar3);
  puVar6 = local_1c;
  piVar5 = (int *)FUN_00462a64(piVar5);
  (**(code **)(*piVar5 + 0x4c))(piVar5,puVar6);
  *in_FS_OFFSET = uVar7;
  ReleaseDC((HWND)0x0,local_c);
  return;
}
