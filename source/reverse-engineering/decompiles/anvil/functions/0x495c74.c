// rea decompile_all
// name: FUN_00495c74
// address: 0x495c74
// body: available
// range: 0x495c74-0x495cc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00495c74(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar3;
  undefined4 uVar4;

  cVar1 = FUN_004c4988(param_1);
  uVar3 = extraout_var;
  if ((cVar1 != '\0') &&
     ((*(char *)(param_1 + 0x2a8) != '\0' || (*(char *)(param_1 + 0x27c) != '\0')))) {
    uVar4 = 0;
    uVar2 = FUN_0045b7cc(*(undefined4 *)(param_1 + 100));
    FUN_004bcb48(param_1,0x30,uVar2,uVar4);
    uVar3 = extraout_var_00;
    if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
      FUN_004c0aa8(param_1);
      uVar3 = extraout_var_01;
    }
  }
  FUN_004c016c(param_1,CONCAT22(uVar3,0xb008));
  return;
}
