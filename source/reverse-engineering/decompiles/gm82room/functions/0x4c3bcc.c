// rea decompile_all
// name: FUN_004c3bcc
// address: 0x4c3bcc
// body: available
// range: 0x4c3bcc-0x4c3cae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c3bcc(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;

  *(undefined4 *)(param_2 + 0xc) = 1;
  FUN_004c59ec(param_1,*(undefined2 *)(param_2 + 4));
  cVar1 = FUN_004c3b34(param_1,param_2);
  if (cVar1 != '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) goto LAB_004c3ca6;
  iVar2 = FUN_004bcb48(param_1,0xb02e,*(undefined2 *)(param_2 + 4),param_1);
  if (iVar2 != 0) {
    return;
  }
  uVar5 = 0;
  uVar3 = (uint)*(ushort *)(param_2 + 4);
  if (uVar3 < 0x1c) {
    if ((uVar3 == 0x1b) || (uVar3 == 3)) {
LAB_004c3c54:
      uVar5 = 4;
    }
    else if (uVar3 == 9) {
      uVar5 = 2;
    }
    else if (uVar3 == 0xd) goto LAB_004c3c54;
  }
  else if (uVar3 - 0x25 < 4) {
    uVar5 = 1;
  }
  else if (uVar3 == 0x2b) goto LAB_004c3c54;
  if (((uVar5 != 0) &&
      (iVar2 = FUN_004bcb48(param_1,0xb01e,*(undefined2 *)(param_2 + 4),0), iVar2 == 0)) &&
     (uVar3 = FUN_004bcb48(param_1,0x87,0,0), (uVar3 & uVar5) == 0)) {
    uVar6 = *(undefined4 *)(param_2 + 8);
    uVar4 = FUN_004df914(param_1,1);
    iVar2 = FUN_004bcb48(uVar4,0xb005,*(undefined2 *)(param_2 + 4),uVar6);
    if (iVar2 != 0) {
      return;
    }
  }
LAB_004c3ca6:
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}
