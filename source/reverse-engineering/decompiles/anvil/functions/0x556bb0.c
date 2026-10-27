// rea decompile_all
// name: FUN_00556bb0
// address: 0x556bb0
// body: available
// range: 0x556bb0-0x556cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x556bd5 (push 0x556cdc followed by fs-segment stack chaining); handler 0x556cdc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00556bb0(short *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 extraout_var;
  short *psVar5;
  int *in_FS_OFFSET;
  undefined4 *puStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  short *local_8;

  local_c = 0;
  puStack_18 = (undefined1 *)0x556bca;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_1c = &LAB_00556cdc;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  puStack_24 = (undefined4 *)0x556be2;
  puStack_18 = &stack0xfffffffc;
  FUN_00408194(param_2,local_8);
  psVar2 = local_8;
  if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
    puStack_24 = (undefined4 *)0x556bff;
    psVar2 = (short *)FUN_00407488(&local_8,local_8);
  }
  iVar4 = 0;
  if (psVar2 != (short *)0x0) {
    iVar4 = *(int *)(psVar2 + -2);
  }
  if (0 < iVar4) {
    psVar2 = local_8;
    if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
      puStack_24 = (undefined4 *)0x556c2d;
      psVar2 = (short *)FUN_00407488(&local_8,local_8);
    }
    if (*psVar2 == 0x40) {
      psVar2 = local_8;
      if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
        psVar2 = (short *)FUN_00407488(&local_8,local_8);
      }
      iVar4 = 0;
      if (psVar2 != (short *)0x0) {
        iVar4 = *(int *)(psVar2 + -2);
      }
      puStack_24 = &local_c;
      FUN_00408984(local_8,2,iVar4 + -1);
      uVar3 = FUN_00408220(local_c);
      iVar4 = thunk_FUN_004179d6(uVar3,CONCAT22(extraout_var,0x40));
      if (iVar4 != 0) {
        psVar5 = (short *)(iVar4 + 2);
        FUN_00408350(param_2,psVar5);
        for (psVar2 = (short *)FUN_00408220(*param_2); *psVar2 != 0; psVar2 = psVar2 + 1) {
          if ((*psVar5 == 0x40) && (psVar5[-1] != 0x40)) {
            *psVar2 = 0x2e;
          }
          psVar5 = psVar5 + 1;
        }
      }
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = (int)puStack_24;
  puStack_1c = &LAB_00556ce3;
  iStack_20 = 0x556cdb;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
