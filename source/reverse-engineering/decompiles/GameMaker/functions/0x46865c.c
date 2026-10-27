// rea decompile_all
// name: FUN_0046865c
// address: 0x46865c
// body: available
// range: 0x46865c-0x46874e inclusive
// range: 0x468754-0x4687b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046865c(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  uVar4 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    uVar4 = param_1[3] - 5U;
  }
  do {
    if ((uint)param_1[0x1d] < 2) {
      FUN_00468548(param_1);
      if ((param_1[0x1d] == 0) && (param_2 == 0)) {
        return 0;
      }
      if (param_1[0x1d] == 0) {
        if (param_1[0x17] < 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = param_1[0xe] + param_1[0x17];
        }
        FUN_0046c820(param_1,iVar3,param_1[0x1b] - param_1[0x17],param_2 == 4);
        param_1[0x17] = param_1[0x1b];
        FUN_00467708(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          if (param_2 == 4) {
            return 2;
          }
          return 0;
        }
        if (param_2 == 4) {
          return 3;
        }
        return 1;
      }
    }
    param_1[0x1b] = param_1[0x1b] + param_1[0x1d];
    param_1[0x1d] = 0;
    uVar1 = param_1[0x1b];
    uVar2 = param_1[0x17] + uVar4;
    if ((uVar1 == 0) || (uVar2 <= uVar1)) {
      param_1[0x1d] = uVar1 - uVar2;
      param_1[0x1b] = uVar2;
      if (param_1[0x17] < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_1[0xe] + param_1[0x17];
      }
      FUN_0046c820(param_1,iVar3,param_1[0x1b] - param_1[0x17],0);
      param_1[0x17] = param_1[0x1b];
      FUN_00467708(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
    if (param_1[0xb] - 0x106U <= (uint)(param_1[0x1b] - param_1[0x17])) {
      if (param_1[0x17] < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_1[0xe] + param_1[0x17];
      }
      FUN_0046c820(param_1,iVar3,param_1[0x1b] - param_1[0x17],0);
      param_1[0x17] = param_1[0x1b];
      FUN_00467708(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}
