// rea decompile_all
// name: FUN_00406428
// address: 0x406428
// body: available
// range: 0x40637c-0x40638d inclusive
// range: 0x406428-0x406461 inclusive
// range: 0x406463-0x406471 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406428(int param_1,int param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  ushort *puVar3;

  iVar2 = 0;
  while( true ) {
    puVar1 = *(undefined2 **)(param_1 + -0x40);
    if ((puVar1 != (undefined2 *)0x0) &&
       (iVar2 = CONCAT22((short)((uint)iVar2 >> 0x10),*puVar1), iVar2 != 0)) {
      puVar3 = puVar1 + 1;
      do {
        if (param_2 == *(int *)(puVar3 + 1)) {
          puVar3 = puVar3 + 3;
          goto LAB_00406466;
        }
        puVar3 = (ushort *)((int)puVar3 + (uint)*puVar3);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (*(int **)(param_1 + -0x30) == (int *)0x0) break;
    param_1 = **(int **)(param_1 + -0x30);
  }
  puVar3 = (ushort *)&DAT_00406462;
LAB_00406466:
  FUN_0040b9a8(puVar3,param_3,iVar2);
  return;
}
