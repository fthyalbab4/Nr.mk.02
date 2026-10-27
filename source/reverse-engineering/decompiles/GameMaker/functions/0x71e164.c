// rea decompile_all
// name: FUN_0071e164
// address: 0x71e164
// body: available
// range: 0x71e164-0x71e3ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71e194 (push 0x71e3af followed by fs-segment stack chaining); handler 0x71e3af lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071e164(short *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *in_FS_OFFSET;
  undefined1 uVar8;
  short **ppsStack_3c;
  int iStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  char local_15;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  short *local_8;

  local_20 = 0;
  local_1c = 0;
  local_c = 0;
  puStack_30 = (undefined1 *)0x71e189;
  local_14 = param_3;
  local_10 = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_34 = &LAB_0071e3af;
  iStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_38;
  psVar2 = local_8;
  puStack_30 = &stack0xfffffffc;
  if ((local_8 != (short *)0x0) && (puStack_30 = &stack0xfffffffc, local_8[-5] != 2)) {
    ppsStack_3c = (short **)0x71e1b6;
    puStack_30 = &stack0xfffffffc;
    psVar2 = (short *)FUN_00407048(&local_8,local_8);
  }
  iVar6 = 0;
  if (psVar2 != (short *)0x0) {
    iVar6 = *(int *)(psVar2 + -2);
  }
  if (iVar6 != 0) {
    psVar2 = local_8;
    if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
      ppsStack_3c = (short **)0x71e1e4;
      psVar2 = (short *)FUN_00407048(&local_8,local_8);
    }
    if (*psVar2 == 0x2f) {
      FUN_00407f0c(&local_c,0);
      iVar6 = 2;
      while( true ) {
        FUN_00407058(&local_8);
        iVar3 = FUN_00408238();
        if (iVar3 < iVar6) break;
        psVar2 = local_8;
        if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
          psVar2 = (short *)FUN_00407048(&local_8,local_8);
        }
        if (psVar2[iVar6 + -1] == 0x2f) break;
        psVar2 = local_8;
        if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
          psVar2 = (short *)FUN_00407048(&local_8,local_8);
        }
        if (psVar2[iVar6 + -1] == 0x5c) {
          FUN_00408034(&local_1c,local_8[iVar6]);
          FUN_004082dc(&local_c,local_1c);
          iVar6 = iVar6 + 2;
        }
        else {
          FUN_00408034(&local_20,local_8[iVar6 + -1]);
          FUN_004082dc(&local_c,local_20);
          iVar6 = iVar6 + 1;
        }
      }
      psVar2 = local_8;
      if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
        psVar2 = (short *)FUN_00407048(&local_8,local_8);
      }
      iVar3 = 0;
      if (psVar2 != (short *)0x0) {
        iVar3 = *(int *)(psVar2 + -2);
      }
      local_15 = iVar3 < iVar6;
      ppsStack_3c = &local_8;
      FUN_004086a8(local_8,iVar6,100000);
      if (local_15 == '\0') {
        piVar7 = (int *)0x0;
        iVar6 = FUN_004ad490(local_10);
        if (-1 < iVar6 + -1) {
          iVar3 = 0;
          uVar8 = true;
          do {
            iVar5 = FUN_004ad3b4(local_10,iVar3);
            FUN_00408640(*(undefined4 *)(iVar5 + 8),local_c);
            if ((bool)uVar8) {
              iVar5 = FUN_004ad3b4(local_10,iVar3);
              if (*(int *)(*(int *)(iVar5 + 0xc) + 4) == 2) {
                piVar7 = (int *)FUN_004ad3b4(local_10,iVar3);
              }
            }
            iVar3 = iVar3 + 1;
            iVar6 = iVar6 + -1;
            uVar8 = iVar6 == 0;
          } while (!(bool)uVar8);
        }
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)FUN_0071cb48(local_c,2,local_14,0);
          (**(code **)(*piVar7 + 0x10))(piVar7,local_10,2);
        }
        FUN_0071e164(local_8,piVar7,local_14);
      }
      else {
        uVar4 = FUN_0071ceb8(local_10,3,local_14);
        FUN_004ac910(uVar4,local_c);
      }
    }
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = (int)ppsStack_3c;
  puStack_34 = &LAB_0071e3b6;
  iStack_38 = 0x71e3a1;
  thunk_FUN_00406e80(&local_20,2,puVar1);
  iStack_38 = 0x71e3ae;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
