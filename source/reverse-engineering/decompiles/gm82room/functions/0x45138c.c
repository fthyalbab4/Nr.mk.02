// rea decompile_all
// name: FUN_0045138c
// address: 0x45138c
// body: available
// range: 0x45138c-0x4515b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4513ae (push 0x4515b5 followed by fs-segment stack chaining); handler 0x4515b5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045138c(undefined4 param_1,int *param_2)

{
  undefined4 **ppuVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  bool bVar7;
  undefined4 **local_34;
  undefined4 **local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 **local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  int *local_18;
  int iVar8;
  short *local_8;

  local_18 = (int *)&stack0xfffffffc;
  iVar6 = 6;
  do {
    local_8 = (short *)0x0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_1c = &LAB_004515b5;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  local_24 = (undefined1 **)0x4513b9;
  FUN_00450d7c(param_1);
  local_18 = (int *)0x0;
  local_24 = (undefined1 **)0x4513c6;
  iVar6 = (**(code **)(*param_2 + 0x14))();
  if (-1 < iVar6 + -1) {
    iVar8 = 0;
    do {
      local_24 = (undefined1 **)0x4513e7;
      (**(code **)(*param_2 + 0xc))(param_2,iVar8,&local_1c);
      local_24 = (undefined1 **)0x4513f2;
      FUN_00415c04(local_1c,&local_8);
      if (local_8 != (short *)0x0) {
        psVar3 = local_8;
        if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
          local_24 = (undefined1 **)0x451419;
          psVar3 = (short *)FUN_00407488(&local_8,local_8);
        }
        if (*psVar3 != 0x3b) {
          psVar3 = local_8;
          if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
            local_24 = (undefined1 **)0x451440;
            psVar3 = (short *)FUN_00407488(&local_8,local_8);
          }
          if (*psVar3 == 0x5b) {
            psVar3 = local_8;
            if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
              local_24 = (undefined1 **)0x451463;
              psVar3 = (short *)FUN_00407488(&local_8,local_8);
            }
            psVar4 = local_8;
            if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
              local_24 = (undefined1 **)0x451482;
              psVar4 = (short *)FUN_00407488(&local_8,local_8);
            }
            iVar5 = 0;
            if (psVar4 != (short *)0x0) {
              iVar5 = *(int *)(psVar4 + -2);
            }
            bVar7 = psVar3[iVar5 + -1] == 0x5d;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) {
            local_24 = (undefined1 **)0x4514ae;
            FUN_00408a54(&local_8,1,1);
            psVar3 = local_8;
            if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
              local_24 = (undefined1 **)0x4514cb;
              psVar3 = (short *)FUN_00407488(&local_8,local_8);
            }
            iVar5 = 0;
            if (psVar3 != (short *)0x0) {
              iVar5 = *(int *)(psVar3 + -2);
            }
            local_24 = (undefined1 **)0x4514df;
            FUN_00408520(&local_8,iVar5 + -1);
            local_24 = (undefined1 **)0x4514ea;
            FUN_00415c04(local_8,&local_20);
            local_24 = (undefined1 **)0x4514f5;
            local_18 = (int *)FUN_00450d0c(param_1,local_20);
          }
          else if (local_18 != (int *)0x0) {
            local_24 = (undefined1 **)0x451514;
            iVar5 = FUN_00408d44(&LAB_004515d0,local_8);
            if (iVar5 < 1) {
              local_24 = (undefined1 **)0x451588;
              (**(code **)(*local_18 + 0x38))(local_18,local_8);
            }
            else {
              local_24 = &local_2c;
              local_28 = 0x45152e;
              FUN_00408984(local_8,1,iVar5 + -1);
              local_28 = 0x451539;
              FUN_00415c04(local_2c,&local_28);
              local_2c = &LAB_004515d0;
              local_30 = &local_34;
              local_34 = (undefined4 **)0x451555;
              FUN_00408984(local_8,iVar5 + 1,0x7fffffff);
              ppuVar1 = local_34;
              local_34 = (undefined4 **)0x451560;
              FUN_00415c04(ppuVar1,&local_30);
              local_34 = local_30;
              FUN_0040875c(&local_24,3);
              (**(code **)(*local_18 + 0x38))(local_18,local_24);
            }
          }
        }
      }
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  piVar2 = local_18;
  *in_FS_OFFSET = local_20;
  local_18 = (int *)&LAB_004515bc;
  local_1c = (undefined1 *)0x4515ac;
  thunk_FUN_004072fc(&local_34,7,piVar2);
  local_1c = (undefined1 *)0x4515b4;
  thunk_FUN_004072d8(&local_8);
  return;
}
