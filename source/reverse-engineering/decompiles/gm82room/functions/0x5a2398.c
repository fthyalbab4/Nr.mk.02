// rea decompile_all
// name: FUN_005a2398
// address: 0x5a2398
// body: available
// range: 0x5a2398-0x5a2416 inclusive
// range: 0x5a241e-0x5a2422 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a23c2 (push 0x5a2417 followed by fs-segment stack chaining); handler 0x5a2417 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a2398(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2ec;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e4;
  undefined1 local_2dc [264];
  undefined1 local_1d4 [8];
  undefined4 local_1cc;
  undefined4 local_164;
  undefined4 local_160;

  if (*(char *)(param_1 + 0x44) != '\0') {
    puStack_2e4 = (undefined1 *)0x5a23b7;
    FUN_005a2188(param_1,local_2dc);
    puStack_2e8 = &LAB_005a2417;
    uStack_2ec = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2ec;
    local_1cc = 0;
    puStack_2e4 = &stack0xfffffffc;
    FUN_005a4f28(local_1d4);
    *(undefined4 *)(param_1 + 0x30) = local_164;
    *(undefined4 *)(param_1 + 0x34) = local_160;
    iVar2 = FUN_005a3728(local_1d4);
    puVar1 = puStack_2e4;
    *(char *)(param_1 + 0x41) = '\x01' - (iVar2 == 0);
    *in_FS_OFFSET = uStack_2ec;
    puStack_2e4 = (undefined1 *)0x5a241e;
    puStack_2e8 = (undefined1 *)0x5a2416;
    FUN_005a2164(local_2dc,uStack_2ec,puVar1);
    return;
  }
  return;
}
