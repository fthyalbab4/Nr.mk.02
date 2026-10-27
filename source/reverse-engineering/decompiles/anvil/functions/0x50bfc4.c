// rea decompile_all
// name: FUN_0050bfc4
// address: 0x50bfc4
// body: available
// range: 0x50bfc4-0x50c01a inclusive
// range: 0x50c032-0x50c043 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50c003 (push 0x50c01b followed by fs-segment stack chaining); handler 0x50c01b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0050bfc4(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_8;

  local_8 = (int *)0x0;
  puStack_1c = (undefined1 *)0x50bfdb;
  cVar2 = FUN_0050bcd0(param_1);
  if (cVar2 != '\0') {
    puStack_1c = (undefined1 *)0x50bfeb;
    local_8 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
    puStack_1c = (undefined1 *)0x50bff5;
    uVar3 = FUN_0050be9c(param_1);
    puStack_20 = &LAB_0050c01b;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    (**(code **)(*local_8 + 0x5c))(local_8,uVar3);
    puVar1 = puStack_1c;
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x50c03a;
    FUN_00405fdc(uVar3,uStack_24,puVar1);
  }
  return local_8;
}
