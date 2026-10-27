// rea decompile_all
// name: FUN_00621774
// address: 0x621774
// body: available
// range: 0x621774-0x6218c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00621774(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 extraout_ECX;
  double in_stack_0000000c;
  double in_stack_00000014;
  double in_stack_0000001c;
  double in_stack_00000024;
  double in_stack_0000002c;
  double in_stack_00000034;
  double in_stack_0000003c;
  double in_stack_00000044;

  cVar2 = FUN_00620ff8(param_1);
  if (cVar2 != '\0') {
    puVar1 = (undefined4 *)(DAT_0085b3c4 + param_1 * 0x18);
    iVar3 = FUN_004048b8();
    FUN_006214a8(*puVar1,iVar3 << 0x18 | 0xffffff,extraout_ECX,
                 (double)(int)puVar1[2] / (double)(int)puVar1[4],
                 (double)(int)puVar1[1] / (double)(int)puVar1[3],0,0,0,0,in_stack_0000000c - 0.5,
                 in_stack_00000014 - 0.5,in_stack_0000001c - 0.5,in_stack_00000024 - 0.5,
                 in_stack_0000002c - 0.5,in_stack_00000034 - 0.5,in_stack_0000003c - 0.5,
                 in_stack_00000044 - 0.5);
  }
  return;
}
