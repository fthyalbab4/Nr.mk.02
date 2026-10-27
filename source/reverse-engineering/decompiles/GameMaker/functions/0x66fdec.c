// rea decompile_all
// name: FUN_0066fdec
// address: 0x66fdec
// body: available
// range: 0x66fdec-0x66fe30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066fdec(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;

  FUN_004492c8(param_1,param_2);
  puVar3 = &LAB_00671144;
  pcVar2 = FUN_00671224;
  uVar4 = param_1;
  uVar1 = FUN_0066fdb0();
  (**(code **)(*param_2 + 4))(param_2,L"StyleName",uVar1,pcVar2,param_1,puVar3,uVar4);
  return;
}
