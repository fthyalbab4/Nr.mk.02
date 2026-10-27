// rea decompile_all
// name: FUN_0071335c
// address: 0x71335c
// body: available
// range: 0x71335c-0x713408 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x713383 (push 0x713409 followed by fs-segment stack chaining); handler 0x713409 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071335c(undefined4 param_1,char param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  int local_10;
  char local_9;
  undefined4 local_8;

  local_14 = 0;
  puStack_24 = (undefined1 *)0x713378;
  local_9 = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_28 = &LAB_00713409;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_10 = -1;
  puStack_24 = &stack0xfffffffc;
  iVar2 = local_10;
  if (-1 < DAT_0077f5d8 + -1) {
    iVar3 = 0;
    iVar4 = DAT_0077f5d8;
    puStack_24 = &stack0xfffffffc;
    do {
      if (*(int *)(DAT_0077f5d4 + iVar3 * 4) != 0) {
        uVar5 = local_9 == '\0';
        if (!(bool)uVar5) {
          uStack_2c = local_8;
          FUN_00408480(&local_14,3);
          FUN_004d43f8(local_14);
        }
        FUN_00408640(*(undefined4 *)(*(int *)(DAT_0077f5d4 + iVar3 * 4) + 4),local_8);
        iVar2 = iVar3;
        if ((bool)uVar5) break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
      iVar2 = local_10;
    } while (iVar4 != 0);
  }
  local_10 = iVar2;
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00713410;
  puStack_28 = (undefined1 *)0x713400;
  thunk_FUN_00406e5c(&local_14,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x713408;
  thunk_FUN_00406e5c(&local_8);
  return;
}
