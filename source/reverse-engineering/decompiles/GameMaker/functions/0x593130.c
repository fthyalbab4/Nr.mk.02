// rea decompile_all
// name: FUN_00593130
// address: 0x593130
// body: available
// range: 0x593130-0x5931c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00593130(undefined4 param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined1 uVar4;
  short sStack_2c;
  undefined1 auStack_2a [8];
  char cStack_22;
  char cStack_21;

  uVar2 = (**(code **)*param_2)();
  uVar3 = FUN_0043f234(param_2);
  if (extraout_EDX - extraout_EDX_00 == (uint)(uVar2 < uVar3)) {
    bVar1 = 0x20 < uVar2 - uVar3;
  }
  else {
    bVar1 = 0 < (int)((extraout_EDX - extraout_EDX_00) - (uint)(uVar2 < uVar3));
  }
  uVar4 = 0;
  if (bVar1) {
    FUN_0043f234(param_2);
    (**(code **)(*param_2 + 0xc))(param_2,&sStack_2c,2);
    uVar4 = 0;
    if (sStack_2c == -0x6ee7) {
      (**(code **)(*param_2 + 0xc))(param_2,auStack_2a,0x1e);
      if ((cStack_22 == '\b') && (cStack_21 == '\0')) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    FUN_0043f254(param_2);
  }
  return uVar4;
}
