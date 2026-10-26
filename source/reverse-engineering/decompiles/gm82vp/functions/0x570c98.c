// rea decompile_all
// name: FUN_00570c98
// address: 0x570c98
// body: available
// range: 0x570c98-0x570d3d inclusive
// range: 0x570d76-0x570fb0 inclusive
// range: 0x570fb2-0x570fdc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00570c98(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  if ((char)PTR_FUN_00686a48 == '\0') {
    piVar1 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
    (**(code **)(*piVar1 + 0x44))(piVar1,0x40);
    (**(code **)(*piVar1 + 0x38))(piVar1,0x40);
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0x3f;
    uStack_14 = 0x3f;
    iVar2 = FUN_00463124(piVar1);
    FUN_0045c2e4(*(undefined4 *)(iVar2 + 0x48),0xffffff);
    piVar3 = (int *)FUN_00463124(piVar1);
    (**(code **)(*piVar3 + 0x4c))(piVar3,&uStack_20);
    iVar2 = 0;
    puVar6 = &DAT_00845294;
    do {
      piVar3 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
      switch(iVar2) {
      case 0:
        uVar4 = FUN_0045fd0c(*(undefined4 *)(*(int *)(DAT_00845290 + 0x388) + 0x1b0));
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
        break;
      case 1:
        uVar4 = FUN_0045fd0c(*(undefined4 *)(*(int *)(DAT_00845290 + 0x38c) + 0x1b0));
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
        break;
      case 2:
        uVar4 = FUN_0045fd0c(*(undefined4 *)(*(int *)(DAT_00845290 + 0x390) + 0x1b0));
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
        break;
      case 3:
        uVar4 = FUN_0045fd0c(*(undefined4 *)(*(int *)(DAT_00845290 + 0x394) + 0x1b0));
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
        break;
      case 4:
        uVar4 = FUN_0045fd0c(*(undefined4 *)(*(int *)(DAT_00845290 + 0x398) + 0x1b0));
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
        break;
      case 5:
        uVar4 = FUN_0045fd0c(*(undefined4 *)(*(int *)(DAT_00845290 + 0x3a0) + 0x1b0));
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
        break;
      case 6:
        uVar4 = FUN_0045fd0c(*(undefined4 *)(*(int *)(DAT_00845290 + 0x3bc) + 0x1b0));
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
        break;
      case 7:
        uVar4 = FUN_0045fd0c(*(undefined4 *)(*(int *)(DAT_00845290 + 0x3b8) + 0x1b0));
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
        break;
      case 8:
        uVar4 = FUN_0045fd0c(*(undefined4 *)(*(int *)(DAT_00845290 + 0x3b4) + 0x1b0));
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
        break;
      case 9:
        uVar4 = FUN_0045fd0c(*(undefined4 *)(*(int *)(DAT_00845290 + 0x3b0) + 0x1b0));
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
        break;
      case 10:
        uVar4 = FUN_0045fd0c(*(undefined4 *)(*(int *)(DAT_00845290 + 0x3ac) + 0x1b0));
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
        break;
      case 0xb:
        uVar4 = FUN_0045fd0c(*(undefined4 *)(*(int *)(DAT_00845290 + 0x3a8) + 0x1b0));
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
        break;
      case 0xc:
        uVar4 = FUN_0045fd0c(*(undefined4 *)(*(int *)(DAT_00845290 + 0x3a4) + 0x1b0));
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
        break;
      case 0xd:
        uVar4 = FUN_0045fd0c(*(undefined4 *)(*(int *)(DAT_00845290 + 0x39c) + 0x1b0));
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
      }
      uVar4 = FUN_00624e6c(&LAB_00622954,1);
      FUN_00624764(uVar4,piVar3,0xffffffff,0x20,0x20,0);
      uVar5 = FUN_00624e6c(&LAB_00622954,1);
      *puVar6 = uVar5;
      FUN_00624764(*puVar6,piVar1,0xffffffff,0x20,0x20,0);
      FUN_006249c8(*puVar6,uVar4);
      FUN_00405fdc(uVar4);
      FUN_00405fdc(piVar3);
      iVar2 = iVar2 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar2 != 0xe);
    FUN_00405fdc(piVar1);
    PTR_FUN_00686a48._0_1_ = '\x01';
  }
  return;
}
