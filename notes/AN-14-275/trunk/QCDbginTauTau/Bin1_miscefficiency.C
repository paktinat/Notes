{
//=========Macro generated from canvas: QCDEstimation/QCDEstimation
//=========  (Sun Mar  8 17:25:34 2015) by ROOT version5.34/03
   TCanvas *QCDEstimation = new TCanvas("QCDEstimation", "QCDEstimation",374,114,700,502);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   QCDEstimation->Range(0,0,1,1);
   QCDEstimation->SetFillColor(0);
   QCDEstimation->SetBorderMode(0);
   QCDEstimation->SetBorderSize(2);
   QCDEstimation->SetLeftMargin(0.18);
   QCDEstimation->SetRightMargin(0.08);
   QCDEstimation->SetTopMargin(0.07);
   QCDEstimation->SetBottomMargin(0.17);
   QCDEstimation->SetFrameLineWidth(3);
   QCDEstimation->SetFrameBorderMode(0);
   QCDEstimation->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: QCDEstimation_1
   TPad *QCDEstimation_1 = new TPad("QCDEstimation_1", "QCDEstimation_1",0.01,0.01,0.99,0.99);
   QCDEstimation_1->Draw();
   QCDEstimation_1->cd();
   QCDEstimation_1->Range(27.83784,-0.1124608,95.40541,0.3983299);
   QCDEstimation_1->SetFillColor(0);
   QCDEstimation_1->SetBorderMode(0);
   QCDEstimation_1->SetBorderSize(2);
   QCDEstimation_1->SetLeftMargin(0.18);
   QCDEstimation_1->SetRightMargin(0.08);
   QCDEstimation_1->SetTopMargin(0.07);
   QCDEstimation_1->SetBottomMargin(0.17);
   QCDEstimation_1->SetFrameLineWidth(3);
   QCDEstimation_1->SetFrameBorderMode(0);
   QCDEstimation_1->SetFrameBorderSize(0);
   QCDEstimation_1->SetFrameLineWidth(3);
   QCDEstimation_1->SetFrameBorderMode(0);
   QCDEstimation_1->SetFrameBorderSize(0);
   Double_t xAxis1[4] = {40, 50, 65, 90}; 
   
   TH1D *hdatainregionQ1 = new TH1D("hdatainregionQ1","hdatainregionQ1",3, xAxis1);
   hdatainregionQ1->SetBinContent(1,0.3097465);
   hdatainregionQ1->SetBinContent(2,0.1516263);
   hdatainregionQ1->SetBinContent(3,0.03285418);
   hdatainregionQ1->SetBinContent(4,0.3160694);
   hdatainregionQ1->SetBinError(1,0.03434233);
   hdatainregionQ1->SetBinError(2,0.03660719);
   hdatainregionQ1->SetBinError(3,0.04087504);
   hdatainregionQ1->SetBinError(4,0.152865);
   hdatainregionQ1->SetEntries(62.29252);
   hdatainregionQ1->SetLineColor(2);
   hdatainregionQ1->SetLineWidth(5);
   hdatainregionQ1->GetXaxis()->SetTitle("M_{T2}");
   hdatainregionQ1->GetXaxis()->SetNdivisions(505);
   hdatainregionQ1->GetXaxis()->SetLabelFont(42);
   hdatainregionQ1->GetXaxis()->SetLabelSize(0.07);
   hdatainregionQ1->GetXaxis()->SetTitleSize(0.07);
   hdatainregionQ1->GetXaxis()->SetTitleOffset(1.1);
   hdatainregionQ1->GetXaxis()->SetTitleFont(42);
   hdatainregionQ1->GetYaxis()->SetTitle("#Delta #Phi_{4}^{min}");
   hdatainregionQ1->GetYaxis()->SetNdivisions(505);
   hdatainregionQ1->GetYaxis()->SetLabelFont(42);
   hdatainregionQ1->GetYaxis()->SetLabelSize(0.07);
   hdatainregionQ1->GetYaxis()->SetTitleSize(0.07);
   hdatainregionQ1->GetYaxis()->SetTitleOffset(1.1);
   hdatainregionQ1->GetYaxis()->SetTitleFont(42);
   hdatainregionQ1->GetZaxis()->SetLabelFont(42);
   hdatainregionQ1->GetZaxis()->SetLabelSize(0.035);
   hdatainregionQ1->GetZaxis()->SetTitleSize(0.035);
   hdatainregionQ1->GetZaxis()->SetTitleFont(42);
   hdatainregionQ1->Draw("");
   QCDEstimation_1->Modified();
   QCDEstimation->cd();
   QCDEstimation->Modified();
   QCDEstimation->cd();
   QCDEstimation->SetSelected(QCDEstimation);
}
