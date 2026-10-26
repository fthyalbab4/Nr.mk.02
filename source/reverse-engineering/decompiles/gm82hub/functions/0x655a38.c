// rea decompile_all
// name: FUN_00655a38
// address: 0x655a38
// body: available
// range: 0x655a38-0x655a8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00655a38(undefined4 param_1)

{
  double dVar1;
  undefined2 uVar6;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_stack_0000000c;

  dVar1 = *(double *)(in_stack_0000000c + 0x50);
  uVar6 = (undefined2)((uint)param_1 >> 0x10);
  uVar2 = CONCAT31((int3)(CONCAT22(uVar6,(ushort)(dVar1 < 0.5) << 8 | (ushort)NAN(dVar1) << 10 |
                                         (ushort)(dVar1 == 0.5) << 0xe) >> 8),dVar1 < 0.5 == 0);
  dVar1 = *(double *)(in_stack_0000000c + 0x68);
  uVar3 = CONCAT31((int3)(CONCAT22(uVar6,(ushort)(dVar1 < 0.5) << 8 | (ushort)NAN(dVar1) << 10 |
                                         (ushort)(dVar1 == 0.5) << 0xe) >> 8),dVar1 < 0.5 == 0);
  uVar4 = FUN_004048b8();
  uVar5 = FUN_004048b8();
  FUN_0058bcb8(uVar5,uVar4,0.5 <= *(double *)(in_stack_0000000c + 0x38),uVar3,uVar2);
  return;
}
