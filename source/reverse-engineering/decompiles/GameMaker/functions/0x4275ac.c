// rea decompile_all
// name: FUN_004275ac
// address: 0x4275ac
// body: available
// range: 0x4275ac-0x42760b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004275ac(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  _union_2683 *p_Var2;
  _union_2683 *p_Var3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _union_2683 local_1c;

  VariantInit((VARIANTARG *)&local_1c.n2);
  local_1c.n2.vt = 5;
  local_1c._8_4_ = param_4;
  local_1c._12_4_ = param_5;
  uVar6 = 7;
  uVar5 = 0;
  uVar4 = 0x400;
  p_Var3 = &local_1c;
  p_Var2 = &local_1c;
  uVar1 = (**(code **)PTR_DAT_0078257c)();
  FUN_00424618(uVar1,*param_1,7,p_Var2,p_Var3,uVar4,uVar5,uVar6);
  return;
}
