// rea decompile_all
// name: FUN_00511b70
// address: 0x511b70
// body: available
// range: 0x511b70-0x511d0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x511b9c (push 0x511d0e followed by fs-segment stack chaining); handler 0x511d0e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00511b70(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined1 *apuStack_1b18 [1518];
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_33c;
  undefined4 local_14;
  undefined4 local_c;

  bVar5 = 0;
  apuStack_1b18[0x5ed] = (undefined1 *)0x511b91;
  FUN_00408ff8(&stack0xfffffcac,&DAT_00511244);
  apuStack_1b18[0x5ec] = &LAB_00511d0e;
  apuStack_1b18[0x5eb] = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = apuStack_1b18 + 0x5eb;
  apuStack_1b18[0x5ed] = &stack0xfffffffc;
  if (DAT_0068fda8 == '\0') {
    apuStack_1b18[0x5ed] = &stack0xfffffffc;
    if (DAT_006840ac == 0) {
      apuStack_1b18[0x5ed] = &stack0xfffffffc;
      FUN_0051162c(DAT_0068fda4,1);
    }
    if ((DAT_006840b0 != (int *)0x0) && (DAT_006840ac != 0)) {
      iVar2 = FUN_0051150c(param_2);
      if (*(int *)(DAT_0068fda0 + 4 + iVar2 * 0x14) != 3) {
        FUN_00404f38(&stack0xfffffcac,0x350,0);
        local_354 = 0x350;
        puVar4 = (undefined4 *)(PTR_DAT_00689418 + (uint)bVar5 * -8 + 4);
        local_33c = *(undefined4 *)PTR_DAT_00689418;
        *(undefined4 *)((int)&stack0xfffffcc8 + (uint)bVar5 * 0xfffffffe * 4) = *puVar4;
        *(undefined4 *)(&stack0xfffffccc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             puVar4[(uint)bVar5 * -2 + 1];
        *(undefined4 *)
         ((int)(&stack0xfffffccc + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4
         ) = (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
        local_350 = 0x402;
        local_c = param_1[1];
        local_14 = (**(code **)*param_1)();
        FUN_0040b268(DAT_0068fda0 + 8 + iVar2 * 0x14);
        uVar3 = (**(code **)(*DAT_006840b0 + 0xc))();
        if ((uVar3 & 0x80000000) == 0) {
          (**(code **)(**(int **)(DAT_0068fda0 + 8 + iVar2 * 0x14) + 0x4c))();
          (**(code **)(**(int **)(DAT_0068fda0 + 8 + iVar2 * 0x14) + 0x74))();
        }
        else {
          FUN_0040b268(DAT_0068fda0 + 8 + iVar2 * 0x14);
          FUN_0040b268(DAT_0068fda0 + 0xc + iVar2 * 0x14);
          *(undefined4 *)(DAT_0068fda0 + 4 + iVar2 * 0x14) = 3;
        }
      }
      if (*(int *)(DAT_0068fda0 + 4 + iVar2 * 0x14) == 3) {
        FUN_00511d30(iVar2);
      }
    }
  }
  puVar1 = apuStack_1b18[0x5ed];
  *in_FS_OFFSET = apuStack_1b18[0x5eb];
  apuStack_1b18[0x5ed] = &LAB_00511d15;
  apuStack_1b18[0x5ec] = (undefined1 *)0x511d0d;
  FUN_004090d0(&stack0xfffffcac,&DAT_00511244,puVar1);
  return;
}
