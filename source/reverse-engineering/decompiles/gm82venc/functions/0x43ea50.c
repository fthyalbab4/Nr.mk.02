// rea decompile_all
// name: FUN_0043ea50
// address: 0x43ea50
// body: available
// range: 0x43ea50-0x43eaef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43ea6e (push 0x43eaf0 followed by fs-segment stack chaining); handler 0x43eaf0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043ea50(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x43ea63;
  (**(code **)(*param_2 + 0x20))();
  puStack_18 = &LAB_0043eaf0;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  cVar2 = FUN_0043e478(param_1);
  if (cVar2 == '\0') {
    FUN_0043a2e8(param_2);
  }
  while( true ) {
    cVar2 = FUN_0043e478(param_1);
    if (cVar2 != '\0') break;
    cVar2 = FUN_0043e89c(param_1);
    if ((byte)(cVar2 - 2U) < 3) {
      FUN_0043f588(param_1);
    }
    uVar3 = FUN_0043a20c(param_2);
    FUN_0043f638(param_1);
    while( true ) {
      cVar2 = FUN_0043e478(param_1);
      if (cVar2 != '\0') break;
      FUN_0043f774(param_1,uVar3);
    }
    FUN_0043f640(param_1);
  }
  FUN_0043f640(param_1);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0043eaf7;
  puStack_18 = (undefined1 *)0x43eaef;
  (**(code **)(*param_2 + 0x24))(param_2,*param_2,puVar1);
  return;
}
