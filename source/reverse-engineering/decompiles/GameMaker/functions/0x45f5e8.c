// rea decompile_all
// name: FUN_0045f5e8
// address: 0x45f5e8
// body: available
// range: 0x45f5e8-0x45f649 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045f5e8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;

  uVar3 = *(undefined4 *)(param_1 + 0xc);
  cVar1 = FUN_00405c98(uVar3,param_2);
  if (cVar1 == '\0') {
    FUN_00405a7c(uVar3);
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar2 = (**(code **)(param_2 + 0x50))(param_2,1);
    *(int *)(param_1 + 0xc) = iVar2;
    *(int *)(iVar2 + 0x14) = param_1;
    uVar3 = FUN_00405d20(param_1,CONCAT22(extraout_var,0xfffd));
    *(undefined4 *)(iVar2 + 0x10) = uVar3;
    *(int *)(iVar2 + 0x1c) = param_1;
    uVar3 = FUN_00405d20(param_1,CONCAT22(extraout_var_00,0xfffc));
    *(undefined4 *)(iVar2 + 0x18) = uVar3;
    FUN_00405d08(param_1,param_1);
  }
  return;
}
