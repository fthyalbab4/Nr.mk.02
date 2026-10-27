// rea decompile_all
// name: FUN_0064ebf4
// address: 0x64ebf4
// body: available
// range: 0x64ebf4-0x64ed6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64ec20 (push 0x64ed6d followed by fs-segment stack chaining); handler 0x64ed6d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_0064ebf4(undefined4 *param_1,undefined4 param_2)

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
  apuStack_1b18[0x5ed] = (undefined1 *)0x64ec15;
  FUN_00408d1c(&stack0xfffffcac,&DAT_0064e408);
  apuStack_1b18[0x5ec] = &LAB_0064ed6d;
  apuStack_1b18[0x5eb] = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = apuStack_1b18 + 0x5eb;
  apuStack_1b18[0x5ed] = &stack0xfffffffc;
  if ((DAT_0077f2a8 != (int *)0x0) && (apuStack_1b18[0x5ed] = &stack0xfffffffc, DAT_0077f2a4 != 0))
  {
    apuStack_1b18[0x5ed] = &stack0xfffffffc;
    iVar2 = FUN_0064e6d0(param_2);
    if (*(int *)(DAT_0078a1ac + 4 + iVar2 * 0x14) != 3) {
      FUN_00404f08(&stack0xfffffcac,0x350,0);
      local_354 = 0x350;
      puVar4 = (undefined4 *)(PTR_DAT_00782648 + (uint)bVar5 * -8 + 4);
      local_33c = *(undefined4 *)PTR_DAT_00782648;
      *(undefined4 *)((int)&stack0xfffffcc8 + (uint)bVar5 * 0xfffffffe * 4) = *puVar4;
      *(undefined4 *)(&stack0xfffffccc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           puVar4[(uint)bVar5 * -2 + 1];
      *(undefined4 *)
       ((int)(&stack0xfffffccc + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
           = (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
      local_350 = 0x402;
      local_c = param_1[1];
      local_14 = (**(code **)*param_1)();
      FUN_0040b140(DAT_0078a1ac + 8 + iVar2 * 0x14);
      uVar3 = (**(code **)(*DAT_0077f2a8 + 0xc))();
      if ((uVar3 & 0x80000000) == 0) {
        (**(code **)(**(int **)(DAT_0078a1ac + 8 + iVar2 * 0x14) + 0x4c))();
        (**(code **)(**(int **)(DAT_0078a1ac + 8 + iVar2 * 0x14) + 0x74))();
      }
      else {
        FUN_0040b140(DAT_0078a1ac + 8 + iVar2 * 0x14);
        FUN_0040b140(DAT_0078a1ac + 0xc + iVar2 * 0x14);
        *(undefined4 *)(DAT_0078a1ac + 4 + iVar2 * 0x14) = 3;
      }
    }
    if (*(int *)(DAT_0078a1ac + 4 + iVar2 * 0x14) == 3) {
      FUN_0064ed90(iVar2);
    }
  }
  puVar1 = apuStack_1b18[0x5ed];
  *in_FS_OFFSET = apuStack_1b18[0x5eb];
  apuStack_1b18[0x5ed] = &LAB_0064ed74;
  apuStack_1b18[0x5ec] = (undefined1 *)0x64ed6c;
  FUN_00408df4(&stack0xfffffcac,&DAT_0064e408,puVar1);
  return;
}
