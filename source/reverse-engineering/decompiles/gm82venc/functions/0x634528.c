// rea decompile_all
// name: FUN_00634528
// address: 0x634528
// body: available
// range: 0x634528-0x6345ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x634542 (push 0x6345ef followed by fs-segment stack chaining); handler 0x6345ef lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00634528(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,
                 int param_6)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  double *pdVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_006345ef;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *param_4 = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  puVar2 = &stack0xfffffffc;
  if (param_3 != 0) {
    FUN_00409360(param_4,param_6,&DAT_00615f70);
    param_3 = param_3 + -1;
    puVar2 = puStack_1c;
    if (0 < param_3) {
      pdVar4 = (double *)(param_6 + 0x20);
      do {
        if (*param_4 == 0) {
          if (*pdVar4 < *(double *)(param_4 + 2)) {
            FUN_00409360(param_4,pdVar4 + -1,&DAT_00615f70);
          }
        }
        if (*param_4 == 1) {
          FUN_004083c0(&local_8,param_4[4]);
          uVar1 = local_8;
          FUN_004083c0(&local_c,*(undefined4 *)(pdVar4 + 1));
          iVar3 = FUN_0041561c(local_c,uVar1);
          if (iVar3 < 0) {
            FUN_00409360(param_4,pdVar4 + -1,&DAT_00615f70);
          }
        }
        pdVar4 = pdVar4 + 3;
        param_3 = param_3 + -1;
        puVar2 = puStack_1c;
      } while (param_3 != 0);
    }
  }
  puStack_1c = puVar2;
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006345f6;
  puStack_20 = (undefined1 *)0x6345ee;
  thunk_FUN_004072fc(&local_c,2,puVar2);
  return;
}
