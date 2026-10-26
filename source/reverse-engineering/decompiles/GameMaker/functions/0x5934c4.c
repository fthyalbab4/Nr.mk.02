// rea decompile_all
// name: FUN_005934c4
// address: 0x5934c4
// body: available
// range: 0x5934c4-0x593556 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005934c4(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined1 uVar4;
  undefined1 auStack_20c [3];
  char cStack_209;
  undefined2 uStack_208;

  uVar2 = (**(code **)*param_2)();
  uVar3 = FUN_0043f234(param_2);
  if (extraout_EDX - extraout_EDX_00 == (uint)(uVar2 < uVar3)) {
    bVar1 = 0x200 < uVar2 - uVar3;
  }
  else {
    bVar1 = 0 < (int)((extraout_EDX - extraout_EDX_00) - (uint)(uVar2 < uVar3));
  }
  uVar4 = 0;
  if (bVar1) {
    FUN_0043f234(param_2);
    FUN_0043f488(param_2,auStack_20c,0x200);
    if (((CONCAT11((char)auStack_20c._0_2_,SUB21(auStack_20c._0_2_,1)) == 0x1da) &&
        ((byte)(cStack_209 - 1U) < 2)) &&
       ((ushort)(CONCAT11((char)uStack_208,(char)((ushort)uStack_208 >> 8)) - 1U) < 3)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    FUN_0043f254(param_2);
  }
  return uVar4;
}
