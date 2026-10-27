// rea decompile_all
// name: FUN_00593200
// address: 0x593200
// body: available
// range: 0x593200-0x59329f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00593200(int param_1,undefined2 *param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;

  cVar2 = '\x01';
  if (*(int *)(param_1 + 0x2a0) != 0) {
    cVar2 = '\0';
    iVar3 = FUN_00590fb4(*(undefined4 *)(param_1 + 0x2a0),param_3,param_3,param_3);
    if (-1 < iVar3) {
      bVar1 = FUN_005903e0(*(undefined4 *)(param_1 + 0x2a0),iVar3);
      uVar4 = CONCAT22(*param_2,(ushort)bVar1);
      cVar2 = FUN_00593344(param_1,param_2,iVar3);
      if (((cVar2 == '\0') && ((byte)((char)uVar4 - 4U) < 2)) &&
         (iVar3 = FUN_00593c9c(param_1,iVar3,(short)((uint)uVar4 >> 0x10)), 0 < iVar3)) {
        uVar4 = FUN_00590f50(*(undefined4 *)(param_1 + 0x2a0),iVar3);
        FUN_005923a0(param_1,uVar4);
        return '\0';
      }
    }
  }
  if (cVar2 == '\0') {
    MessageBeep(0);
  }
  return cVar2;
}
