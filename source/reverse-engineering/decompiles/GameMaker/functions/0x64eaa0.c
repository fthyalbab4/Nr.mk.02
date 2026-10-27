// rea decompile_all
// name: FUN_0064eaa0
// address: 0x64eaa0
// body: available
// range: 0x64eaa0-0x64ebd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64eac5 (push 0x64ebd4 followed by fs-segment stack chaining); handler 0x64ebd4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064eaa0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_18 = (undefined1 *)0x64eaba;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_0064ebd4;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  cVar2 = FUN_00416e40(local_8);
  if (cVar2 != '\0') {
    iVar3 = FUN_0064e6d0(param_2);
    if (*(int *)(DAT_0078a1ac + 4 + iVar3 * 0x14) != 3) {
      FUN_00408144(&local_c,local_8);
      uStack_20 = 0x64eb10;
      uStack_20 = FUN_0040b140(DAT_0078a1ac + 8 + iVar3 * 0x14);
      FUN_00407c60(local_c);
      uVar4 = (**(code **)(*DAT_0077f2a8 + 0x38))();
      if ((uVar4 & 0x80000000) == 0) {
        (**(code **)(**(int **)(DAT_0078a1ac + 8 + iVar3 * 0x14) + 0x4c))();
        (**(code **)(**(int **)(DAT_0078a1ac + 8 + iVar3 * 0x14) + 0x74))();
      }
      else {
        FUN_0040b140(DAT_0078a1ac + 8 + iVar3 * 0x14);
        FUN_0040b140(DAT_0078a1ac + 0xc + iVar3 * 0x14);
        *(undefined4 *)(DAT_0078a1ac + 4 + iVar3 * 0x14) = 3;
      }
    }
    if (*(int *)(DAT_0078a1ac + 4 + iVar3 * 0x14) == 3) {
      FUN_00407eb8(DAT_0078a1ac + 0x10 + iVar3 * 0x14,local_8);
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0064ebdb;
  puStack_1c = (undefined1 *)0x64ebcb;
  FUN_00407a78(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x64ebd3;
  thunk_FUN_00406e5c(&local_8);
  return;
}
