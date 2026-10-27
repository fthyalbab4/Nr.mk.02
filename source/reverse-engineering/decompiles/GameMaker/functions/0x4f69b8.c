// rea decompile_all
// name: FUN_004f69b8
// address: 0x4f69b8
// body: available
// range: 0x4f69b8-0x4f69f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f69b8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar3;
  undefined4 uVar4;

  FUN_004f0b70(param_1);
  cVar1 = FUN_004f7a54(param_1);
  uVar3 = extraout_var;
  if (cVar1 != '\0') {
    uVar4 = 0;
    uVar2 = FUN_0045b10c(*(undefined4 *)(param_1 + 100));
    FUN_004efb90(param_1,0x30,uVar2,uVar4);
    uVar3 = extraout_var_00;
  }
  FUN_004f31b4(param_1,CONCAT22(uVar3,0xb008));
  return;
}
