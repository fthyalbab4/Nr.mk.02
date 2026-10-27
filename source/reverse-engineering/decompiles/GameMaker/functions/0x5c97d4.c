// rea decompile_all
// name: FUN_005c97d4
// address: 0x5c97d4
// body: available
// range: 0x5c97d4-0x5c9818 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c97d4(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;

  FUN_004492c8(param_1,param_2);
  puVar3 = &LAB_005c967c;
  puVar2 = &LAB_005c9748;
  uVar4 = param_1;
  uVar1 = FUN_005c97a0();
  (**(code **)(*param_2 + 4))(param_2,L"DOMVendorDesc",uVar1,puVar2,param_1,puVar3,uVar4);
  return;
}
