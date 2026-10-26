// rea decompile_all
// name: FUN_0063925c
// address: 0x63925c
// body: available
// range: 0x63925c-0x6392cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063925c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,int param_6)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;

  uVar8 = *(undefined4 *)(param_6 + 0xc);
  uVar7 = *(undefined4 *)(param_6 + 8);
  uVar6 = *(undefined4 *)(param_6 + 0x24);
  uVar5 = *(undefined4 *)(param_6 + 0x20);
  dVar1 = *(double *)(param_6 + 0x68);
  uVar2 = CONCAT31((int3)(CONCAT22((short)((uint)param_1 >> 0x10),
                                   (ushort)(dVar1 < 0.5) << 8 | (ushort)NAN(dVar1) << 10 |
                                   (ushort)(dVar1 == 0.5) << 0xe) >> 8),dVar1 < 0.5 == 0);
  uVar3 = FUN_004048b8();
  iVar4 = FUN_005b667c(param_1,uVar3,0.5 <= *(double *)(param_6 + 0x50),uVar2,uVar5,uVar6,uVar7,
                       uVar8);
  *param_4 = 0;
  if (iVar4 == 0) {
    param_4[2] = 0;
    param_4[3] = 0xc0100000;
  }
  else {
    *(double *)(param_4 + 2) = (double)*(int *)(iVar4 + 4);
  }
  return;
}
