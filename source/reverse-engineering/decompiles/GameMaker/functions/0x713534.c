// rea decompile_all
// name: FUN_00713534
// address: 0x713534
// body: available
// range: 0x713534-0x7135b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x713552 (push 0x7135b1 followed by fs-segment stack chaining); handler 0x7135b1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00713534(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x713547;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_007135b1;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_c = -1;
  puStack_18 = &stack0xfffffffc;
  if (-1 < DAT_0077f5d8 + -1) {
    iVar3 = 0;
    iVar4 = DAT_0077f5d8;
    puStack_18 = &stack0xfffffffc;
    do {
      if (*(char *)(DAT_00790a14 + iVar3) != '\0') {
        iVar2 = FUN_00565900(*(undefined4 *)(DAT_0077f5d4 + iVar3 * 4),local_8,0);
        if (iVar2 != 0) {
          local_c = *(int *)(iVar2 + 0x10);
        }
        if (-1 < local_c) break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_007135b8;
  puStack_1c = (undefined1 *)0x7135b0;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
