// rea decompile_all
// name: FUN_006c50a0
// address: 0x6c50a0
// body: available
// range: 0x6c50a0-0x6c5256 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6c50bb (push 0x6c5257 followed by fs-segment stack chaining); handler 0x6c5257 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c50a0(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  char local_5;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_006c5257;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar3 = FUN_00514e78(&PTR_LAB_006c3530,1,0);
  iVar4 = FUN_0071b5bc(0);
  DAT_00790095 = iVar4 == 1;
  FUN_006dfbf0(*(undefined4 *)PTR_DAT_00781a58,iVar3);
  FUN_004ee5c0(*(undefined4 *)(iVar3 + 0x404),*PTR_DAT_0078258c);
  uVar5 = FUN_0062cd94(param_1);
  *(undefined4 *)(iVar3 + 0x45c) = uVar5;
  *(undefined4 *)(iVar3 + 0x46c) = param_1;
  local_5 = FUN_005ceb84(0);
  uVar5 = FUN_007049a8(&DAT_00704428,1);
  *(undefined4 *)(iVar3 + 0x460) = uVar5;
  FUN_00704a60(uVar5,*(undefined4 *)(iVar3 + 0x45c));
  FUN_0062cabc(param_1,&local_c);
  FUN_00407eb8(iVar3 + 0x464,local_c);
  *(undefined1 *)(iVar3 + 0x468) = 0;
  FUN_006c60f8(iVar3);
  if (DAT_0077f40c == 0) {
    DAT_0077f40c = FUN_005a5048(&DAT_005a4c6c,1);
  }
  FUN_006c5608(iVar3);
  DAT_00790094 = FUN_0071b5fc();
  *(int *)(iVar3 + 0x8194) = iVar3;
  *(code **)(iVar3 + 0x8190) = FUN_006c5268;
  FUN_006c6e20(iVar3);
  *(undefined4 *)(iVar3 + 0x2b8) = 2;
  *(undefined1 *)(iVar3 + 0x8188) = 0;
  FUN_004edc78(*(undefined4 *)(iVar3 + 0x394),10);
  FUN_004edce0(*(undefined4 *)(iVar3 + 0x394),*(int *)(*(int *)(iVar3 + 0x454) + 0x48) + -0x1e);
  FUN_004edd14(*(undefined4 *)(iVar3 + 0x394),
               (*(int *)(iVar3 + 0x4c) - *(int *)(*(int *)(iVar3 + 0x3dc) + 0x4c)) + -0x3c);
  FUN_004edcac(*(undefined4 *)(iVar3 + 0x394),*(int *)(*(int *)(iVar3 + 0x3dc) + 0x4c) + 10);
  cVar2 = FUN_005ceb84(*(undefined4 *)PTR_DAT_00782474);
  puVar1 = puStack_1c;
  if ((DAT_00790094 == '\x01') && ((cVar2 != '\x01' || (local_5 == '\x01')))) {
    DAT_0077f410 = 1;
    _DAT_0077f414 = _DAT_0077f414 + 0x348b;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006c525e;
  puStack_20 = (undefined1 *)0x6c5256;
  thunk_FUN_00406e5c(&local_c,uStack_24,puVar1);
  return;
}
