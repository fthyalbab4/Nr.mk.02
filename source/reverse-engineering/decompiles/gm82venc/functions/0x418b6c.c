// rea decompile_all
// name: FUN_00418b6c
// address: 0x418b6c
// body: available
// range: 0x418b6c-0x418c22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418c21 to 0x418c79 FUN_00418c79 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418b6c(char *param_1,float10 *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined3 uVar6;
  undefined3 extraout_var;
  uint uVar4;
  int iVar5;
  undefined2 extraout_var_00;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar7;
  uint uVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar9;
  int extraout_EDX_01;
  ushort in_FPUStatusWord;
  ushort uVar10;
  float10 fVar11;

  cVar2 = (char)DAT_0068cc90;
  uVar10 = (in_FPUStatusWord >> 8 & 0x7f) << 8;
  fVar11 = (float10)0;
  FUN_00418c23();
  cVar1 = *param_1;
  if ((cVar1 == '+') || (cVar1 == '-')) {
    param_1 = param_1 + 1;
  }
  uVar3 = FUN_00418c2e();
  uVar8 = 0;
  uVar6 = (undefined3)((uint)uVar3 >> 8);
  pcVar7 = extraout_ECX;
  if (*param_1 == cVar2) {
    param_1 = param_1 + 1;
    FUN_00418c2e();
    uVar8 = -extraout_EDX;
    pcVar7 = extraout_ECX_00;
    uVar6 = extraout_var;
  }
  if (pcVar7 != param_1) {
    uVar4 = CONCAT31(uVar6,*param_1) & 0xffffffdf;
    uVar9 = uVar8;
    if ((char)uVar4 == 'E') {
      param_1 = param_1 + 1;
      FUN_00418c4a();
      uVar9 = extraout_EDX_00 + uVar8;
      uVar4 = uVar8;
    }
    FUN_00418c23(uVar4,uVar9);
    if (*param_1 == '\0') {
      iVar5 = extraout_EDX_01;
      if (param_3 == '\x01') {
        iVar5 = extraout_EDX_01 + 4;
      }
      thunk_FUN_00405bac(iVar5);
      if (cVar1 == '-') {
        fVar11 = -fVar11;
      }
      if (param_3 == '\0') {
        *param_2 = fVar11;
      }
      else {
        *(longlong *)param_2 = (longlong)ROUND(fVar11);
      }
      if ((uVar10 & 9) == 0) {
        uVar3 = CONCAT31((int3)(CONCAT22(extraout_var_00,uVar10) >> 8),1);
        goto LAB_00418c1a;
      }
    }
  }
  uVar3 = 0;
LAB_00418c1a:
  FUN_00418c79(uVar3);
  return;
}
