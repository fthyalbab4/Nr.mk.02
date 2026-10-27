// rea decompile_all
// name: FUN_006bcd30
// address: 0x6bcd30
// body: available
// range: 0x6bcd30-0x6bcda4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6bcd4f (push 0x6bcda5 followed by fs-segment stack chaining); handler 0x6bcda5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bcd30(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;

  puStack_1c = (undefined1 *)0x6bcd44;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_006bcda5;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_1c = &stack0xfffffffc, -1 < DAT_0077f3f8 + -1)) {
    iVar3 = 0;
    iVar4 = DAT_0077f3f8;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar1 = *(int *)(DAT_0077f3f4 + iVar3 * 4);
      bVar5 = iVar1 == 0;
      if ((!bVar5) && (FUN_00408640(*(undefined4 *)(iVar1 + 4),local_8), bVar5)) break;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006bcdac;
  puStack_20 = (undefined1 *)0x6bcda4;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar2);
  return;
}
