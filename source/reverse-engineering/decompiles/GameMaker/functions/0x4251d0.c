// rea decompile_all
// name: FUN_004251d0
// address: 0x4251d0
// body: available
// range: 0x4251d0-0x42524c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004251d0(undefined4 param_1,ushort *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  if ((*param_2 & 0xfff) < 0x14) {
    if (((ushort)param_3 & 0xfff) < 0x14) {
      uVar5 = 0;
      uVar1 = 0x400;
      puVar4 = param_2;
      uVar3 = param_3;
      uVar2 = (**(code **)PTR_DAT_0078257c)();
      FUN_00424618(uVar2,*param_2,param_3,param_1,puVar4,uVar1,uVar5,uVar3);
    }
    else {
      FUN_00424184(*param_2,param_3);
    }
  }
  else {
    FUN_004252bc(param_1,param_2,8);
    uVar6 = 0;
    uVar5 = 0x400;
    uVar3 = param_1;
    uVar2 = param_3;
    uVar1 = (**(code **)PTR_DAT_0078257c)();
    FUN_00424618(uVar1,*param_2,param_3,param_1,uVar3,uVar5,uVar6,uVar2);
  }
  return;
}
